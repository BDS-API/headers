#pragma once

class MoveToPOIGoal : BaseMoveToGoal {

public:
    virtual ~MoveToPOIGoal();
    virtual bool canUse(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock(void);
    virtual void _getTargetPosition(void)const;
    virtual void getPOI(POIType);
    virtual void _getOwnedPOI(POIType)const;

    void MoveToPOIGoal(Mob &, float, POIType, float);
    void _canReachPOI(Vec3 const&, float, bool);
    void _updatePOIBooking(void);
};
