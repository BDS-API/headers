#pragma once

#include <string>
#include "Goal.h"


class DoorInteractGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canContinueToUse();
    ~DoorInteractGoal();
    virtual void start();
    virtual void tick();
    void _exitComplete()const;
    void _mobTooBigForDoorway()const;
    void _doorBlocksPath()const;
    DoorInteractGoal(Mob &);
//  void _findBlockingDoorAtPos(BlockPos const&, Mob const&, Path *, Direction::Type &, Direction::Type &); //TODO: incomplete function definition
    void _mobHasExited();
};
