#pragma once

#include "GenericMoveControl.h"


class AmphibiousMoveControl : GenericMoveControl {

public:
    ~AmphibiousMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);
    AmphibiousMoveControl();
};
