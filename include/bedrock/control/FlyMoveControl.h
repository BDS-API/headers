#pragma once

#include "../../unmapped/MoveControlComponent.h"
#include "MoveControl.h"
#include "../actor/Mob.h"


class FlyMoveControl : MoveControl {

public:
    virtual void tick(MoveControlComponent &, Mob &);
    ~FlyMoveControl();
    FlyMoveControl();
};
