#pragma once

#include "../../block/unmapped/BlockSource"
#include "../Mob"
#include "../../util/BlockPos"
#include "../../util/Vec3"


class MoveToPOIGoal : BaseMoveToGoal {

public:
    virtual MoveToPOIGoal::~MoveToPOIGoal()
    virtual bool canUse();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock();
    virtual void _getTargetPosition()const;
    virtual void getPOI(POIType);
    virtual void _getOwnedPOI(POIType)const;

    MoveToPOIGoal(Mob &, float, POIType, float);
    void _canReachPOI(Vec3 const&, float, bool);
    void _updatePOIBooking();
};
