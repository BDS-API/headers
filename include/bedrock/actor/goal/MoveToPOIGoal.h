#pragma once

#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../../util/Vec3.h"
#include "BaseMoveToGoal.h"
#include "../Mob.h"
#include "../../util/BlockPos.h"


class MoveToPOIGoal : BaseMoveToGoal {

public:
    virtual bool canUse();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
//  virtual void getPOI(POIType); //TODO: incomplete function definition
    ~MoveToPOIGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual void stop();
//  virtual void _getOwnedPOI(POIType)const; //TODO: incomplete function definition
    virtual void _getTargetPosition()const;
    virtual void _moveToBlock();
    void _updatePOIBooking();
    void _canReachPOI(Vec3 const&, float, bool);
//  MoveToPOIGoal(Mob &, float, POIType, float); //TODO: incomplete function definition
};
