#pragma once

#include "../actor/Mob.h"
#include "../../unmapped/MoveControlComponent.h"
#include "./MoveControl.h"


class SlimeMoveControl : MoveControl {

public:
    virtual ~SlimeMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    SlimeMoveControl();
    void _getJumpDelay(Mob &)const;
};
