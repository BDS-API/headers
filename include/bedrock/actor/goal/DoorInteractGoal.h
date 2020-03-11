#pragma once

#include "../../../unmapped/Path.h"
#include "../../util/BlockPos.h"
#include "./Goal.h"
#include "../Mob.h"
#include <string>


class DoorInteractGoal : Goal {

public:
    virtual ~DoorInteractGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DoorInteractGoal(Mob &);
//  void _findBlockingDoorAtPos(BlockPos const&, Mob const&, Path *, Direction::Type &, Direction::Type &); //TODO: incomplete function definition
    void _mobTooBigForDoorway()const;
    void _mobHasExited();
    void _doorBlocksPath()const;
    void _exitComplete()const;
};
