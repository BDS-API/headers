#pragma once

#include "MoveControl.h"


class HoverMoveControl : MoveControl {

public:
    ~HoverMoveControl(); // _ZN16HoverMoveControlD2Ev
    virtual void tick(MoveControlComponent &, Mob &); // _ZN16HoverMoveControl4tickER20MoveControlComponentR3Mob
    HoverMoveControl(); // _ZN16HoverMoveControlC2Ev
};
