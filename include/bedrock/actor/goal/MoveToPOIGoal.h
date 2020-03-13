#pragma once

#include <string>
#include "BaseMoveToGoal.h"


class MoveToPOIGoal : BaseMoveToGoal {

public:
    ~MoveToPOIGoal(); // _ZN13MoveToPOIGoalD2Ev
    virtual bool canUse(); // _ZN13MoveToPOIGoal6canUseEv
    virtual void stop(); // _ZN13MoveToPOIGoal4stopEv
    virtual void tick(); // _ZN13MoveToPOIGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK13MoveToPOIGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN13MoveToPOIGoal13isValidTargetER11BlockSourceRK8BlockPos
    virtual void _moveToBlock(); // _ZN13MoveToPOIGoal12_moveToBlockEv
    virtual void _getTargetPosition()const; // _ZNK13MoveToPOIGoal18_getTargetPositionEv
//  virtual void getPOI(POIType); //TODO: incomplete function definition // _ZN13MoveToPOIGoal6getPOIE7POIType
//  virtual void _getOwnedPOI(POIType)const; //TODO: incomplete function definition // _ZNK13MoveToPOIGoal12_getOwnedPOIE7POIType
//  MoveToPOIGoal(Mob &, float, POIType, float); //TODO: incomplete function definition // _ZN13MoveToPOIGoalC2ER3Mobf7POITypef
    void _canReachPOI(Vec3 const&, float, bool); // _ZN13MoveToPOIGoal12_canReachPOIERK4Vec3fb
    void _updatePOIBooking(); // _ZN13MoveToPOIGoal17_updatePOIBookingEv
};
