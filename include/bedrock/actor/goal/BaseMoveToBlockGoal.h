#pragma once

#include "BaseMoveToGoal.h"
#include "../Mob.h"


class BaseMoveToBlockGoal : BaseMoveToGoal {

public:
    virtual bool canContinueToUse();
    virtual void findTargetBlock();
    virtual void _moveToBlock();
    virtual bool canUse();
    ~BaseMoveToBlockGoal();
    BaseMoveToBlockGoal(Mob &, float, int, int, int, float, float);
};
