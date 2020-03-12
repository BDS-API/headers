#pragma once

#include "MoveControl.h"


class FlyMoveControl : MoveControl {

public:
    ~FlyMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);
    FlyMoveControl();
};
