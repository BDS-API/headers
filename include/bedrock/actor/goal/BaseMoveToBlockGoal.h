#pragma once

#include "BaseMoveToGoal.h"


class BaseMoveToBlockGoal : public BaseMoveToGoal {

public:
    virtual ~BaseMoveToBlockGoal(); // _ZN19BaseMoveToBlockGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN19BaseMoveToBlockGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN19BaseMoveToBlockGoal16canContinueToUseEv
    virtual void _moveToBlock(); // _ZN19BaseMoveToBlockGoal12_moveToBlockEv
    virtual void findTargetBlock(); // _ZN19BaseMoveToBlockGoal15findTargetBlockEv
    BaseMoveToBlockGoal(Mob &, float, int, int, int, float, float); // _ZN19BaseMoveToBlockGoalC2ER3Mobfiiiff
};
