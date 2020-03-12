#pragma once

#include "../../unmapped/MoveControlComponent.h"
#include "MoveControl.h"
#include "../actor/Mob.h"


class HoverMoveControl : MoveControl {

public:
    virtual void tick(MoveControlComponent &, Mob &);
    ~HoverMoveControl();
    HoverMoveControl();
};
