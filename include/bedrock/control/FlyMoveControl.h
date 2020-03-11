#pragma once

#include "../actor/Mob.h"
#include "../../unmapped/MoveControlComponent.h"
#include "./MoveControl.h"


class FlyMoveControl : MoveControl {

public:
    virtual ~FlyMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    FlyMoveControl();
};
