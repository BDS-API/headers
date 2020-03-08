#pragma once

#include "../Mob"


class BaseMoveToBlockGoal : BaseMoveToGoal {

public:
    virtual BaseMoveToBlockGoal::~BaseMoveToBlockGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void _moveToBlock();
    virtual void findTargetBlock();

    BaseMoveToBlockGoal(Mob &, float, int, int, int, float, float);
};
