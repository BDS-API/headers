#pragma once

class BaseMoveToBlockGoal : BaseMoveToGoal {

public:
    virtual ~BaseMoveToBlockGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void _moveToBlock(void);
    virtual void findTargetBlock(void);

    void BaseMoveToBlockGoal(Mob &, float, int, int, int, float, float);
};
