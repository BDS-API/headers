#pragma once

#include "BaseMoveToGoal.h"


class BaseMoveToBlockGoal : BaseMoveToGoal {

public:
    ~BaseMoveToBlockGoal();
    virtual bool canContinueToUse();
    virtual void _moveToBlock();
    virtual bool canUse();
    virtual void findTargetBlock();
    BaseMoveToBlockGoal(Mob &, float, int, int, int, float, float);
};
