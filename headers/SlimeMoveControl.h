#pragma once

class SlimeMoveControl : MoveControl {

public:
    virtual ~SlimeMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    void SlimeMoveControl(void);
    void _getJumpDelay(Mob &)const;
};
