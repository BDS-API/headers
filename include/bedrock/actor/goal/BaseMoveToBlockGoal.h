#pragma once

#include "../Mob.h"
#include "./BaseMoveToGoal.h"


class BaseMoveToBlockGoal : BaseMoveToGoal {

public:
    virtual ~BaseMoveToBlockGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void _moveToBlock();
    virtual void findTargetBlock();

    BaseMoveToBlockGoal(Mob &, float, int, int, int, float, float);
};
