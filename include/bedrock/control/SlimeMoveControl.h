#pragma once

#include "../../unmapped/MoveControlComponent.h"
#include "MoveControl.h"
#include "../actor/Mob.h"


class SlimeMoveControl : MoveControl {

public:
    virtual void tick(MoveControlComponent &, Mob &);
    ~SlimeMoveControl();
    void _getJumpDelay(Mob &)const;
    SlimeMoveControl();
};
