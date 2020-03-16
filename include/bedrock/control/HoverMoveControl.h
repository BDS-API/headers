#pragma once

#include "MoveControl.h"


class HoverMoveControl : public MoveControl {

public:
    virtual ~HoverMoveControl(); // _ZN16HoverMoveControlD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(MoveControlComponent &, Mob &); // _ZN16HoverMoveControl4tickER20MoveControlComponentR3Mob
    HoverMoveControl(); // _ZN16HoverMoveControlC2Ev
};
