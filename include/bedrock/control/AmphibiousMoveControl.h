#pragma once

#include "../actor/Mob.h"
#include "./GenericMoveControl.h"
#include "../../unmapped/MoveControlComponent.h"


class AmphibiousMoveControl : GenericMoveControl {

public:
    virtual ~AmphibiousMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    AmphibiousMoveControl();
};
