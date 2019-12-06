#pragma once

class MoveToBlockGoal : BaseMoveToGoal {

public:
    virtual ~MoveToBlockGoal();
    virtual bool canUse(void);
    virtual void _moveToBlock(void);
    virtual void findNearestBlock(void);

    void MoveToBlockGoal(Mob &, float, int, int, int, float, float);
};
