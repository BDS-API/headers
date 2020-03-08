#pragma once

#include "../../unmapped/MoveControlComponent"
#include "../actor/Mob"


class SlimeMoveControl : MoveControl {

public:
    SlimeMoveControl::~SlimeMoveControl()
    virtual void tick(MoveControlComponent &, Mob &);

    SlimeMoveControl(void);
    void _getJumpDelay(Mob &)const;
};
