#pragma once

#include <string>
#include "Goal.h"


class DoorInteractGoal : public Goal {

public:
    virtual ~DoorInteractGoal(); // _ZN16DoorInteractGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN16DoorInteractGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN16DoorInteractGoal16canContinueToUseEv
    virtual void start(); // _ZN16DoorInteractGoal5startEv
    virtual void tick(); // _ZN16DoorInteractGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16DoorInteractGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DoorInteractGoal(Mob &); // _ZN16DoorInteractGoalC2ER3Mob
//    void _findBlockingDoorAtPos(BlockPos const&, Mob const&, Path *, long &, long &); //TODO: incomplete function definition // _ZN16DoorInteractGoal22_findBlockingDoorAtPosERK8BlockPosRK3MobP4PathRN9Direction4TypeESA_
    void _mobTooBigForDoorway()const; // _ZNK16DoorInteractGoal20_mobTooBigForDoorwayEv
    void _mobHasExited(); // _ZN16DoorInteractGoal13_mobHasExitedEv
    void _doorBlocksPath()const; // _ZNK16DoorInteractGoal15_doorBlocksPathEv
    void _exitComplete()const; // _ZNK16DoorInteractGoal13_exitCompleteEv
};
