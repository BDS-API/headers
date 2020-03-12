#pragma once

#include "../../unmapped/MoveControlComponent.h"
#include "GenericMoveControl.h"
#include "../actor/Mob.h"


class AmphibiousMoveControl : GenericMoveControl {

public:
    virtual void tick(MoveControlComponent &, Mob &);
    ~AmphibiousMoveControl();
    AmphibiousMoveControl();
};
