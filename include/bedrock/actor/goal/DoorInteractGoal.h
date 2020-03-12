#pragma once

#include <string>
#include "../Mob.h"
#include "../../../unmapped/Path.h"
#include "Goal.h"
#include "../../util/BlockPos.h"


class DoorInteractGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    ~DoorInteractGoal();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void start();
    void _exitComplete()const;
    void _doorBlocksPath()const;
//  void _findBlockingDoorAtPos(BlockPos const&, Mob const&, Path *, Direction::Type &, Direction::Type &); //TODO: incomplete function definition
    DoorInteractGoal(Mob &);
    void _mobHasExited();
    void _mobTooBigForDoorway()const;
};
