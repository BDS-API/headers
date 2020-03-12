#pragma once

#include <string>
#include "BaseMoveToGoal.h"


class MoveToPOIGoal : BaseMoveToGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
//  virtual void getPOI(POIType); //TODO: incomplete function definition
    virtual void stop();
//  virtual void _getOwnedPOI(POIType)const; //TODO: incomplete function definition
    virtual void tick();
    ~MoveToPOIGoal();
    virtual void _moveToBlock();
    virtual bool canUse();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _getTargetPosition()const;
    void _updatePOIBooking();
    void _canReachPOI(Vec3 const&, float, bool);
//  MoveToPOIGoal(Mob &, float, POIType, float); //TODO: incomplete function definition
};
