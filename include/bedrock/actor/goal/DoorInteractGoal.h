#pragma once

#include "../Mob"
#include "../../../unmapped/Path"
#include "../../util/BlockPos"


class DoorInteractGoal : Goal {

public:
    virtual DoorInteractGoal::~DoorInteractGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    DoorInteractGoal(Mob &);
    void _findBlockingDoorAtPos(BlockPos const&, Mob const&, Path *, Direction::Type &, Direction::Type &);
    void _mobTooBigForDoorway()const;
    void _mobHasExited();
    void _doorBlocksPath()const;
    void _exitComplete()const;
};
