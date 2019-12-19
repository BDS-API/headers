#pragma once

class SlimeMoveControl : MoveControl {

public:
    virtual SlimeMoveControl::~SlimeMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    SlimeMoveControl(void);
    void _getJumpDelay(Mob &)const;
};
