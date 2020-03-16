#pragma once

#include "MoveControl.h"


class FlyMoveControl : public MoveControl {

public:
    virtual ~FlyMoveControl(); // _ZN14FlyMoveControlD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(MoveControlComponent &, Mob &); // _ZN14FlyMoveControl4tickER20MoveControlComponentR3Mob
    FlyMoveControl(); // _ZN14FlyMoveControlC2Ev
};
