#pragma once

#include "MoveControl.h"


class SlimeMoveControl : MoveControl {

public:
    virtual void tick(MoveControlComponent &, Mob &);
    ~SlimeMoveControl();
    void _getJumpDelay(Mob &)const;
    SlimeMoveControl();
};
