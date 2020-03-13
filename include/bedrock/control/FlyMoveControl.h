#pragma once

#include "MoveControl.h"


class FlyMoveControl : MoveControl {

public:
    ~FlyMoveControl(); // _ZN14FlyMoveControlD2Ev
    virtual void tick(MoveControlComponent &, Mob &); // _ZN14FlyMoveControl4tickER20MoveControlComponentR3Mob
    FlyMoveControl(); // _ZN14FlyMoveControlC2Ev
};
