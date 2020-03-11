#pragma once

#include "../../util/Vec3.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "./BaseMoveToGoal.h"
#include <string>


class MoveToPOIGoal : BaseMoveToGoal {

public:
    virtual ~MoveToPOIGoal();
    virtual bool canUse();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock();
    virtual void _getTargetPosition()const;
//  virtual void getPOI(POIType); //TODO: incomplete function definition
//  virtual void _getOwnedPOI(POIType)const; //TODO: incomplete function definition

//  MoveToPOIGoal(Mob &, float, POIType, float); //TODO: incomplete function definition
    void _canReachPOI(Vec3 const&, float, bool);
    void _updatePOIBooking();
};
