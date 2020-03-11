#pragma once

#include "../actor/Mob.h"
#include "../../unmapped/MoveControlComponent.h"
#include "./MoveControl.h"


class HoverMoveControl : MoveControl {

public:
    virtual ~HoverMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    HoverMoveControl();
};
