#pragma once

#include "MoveControl.h"


class HoverMoveControl : MoveControl {

public:
    virtual void tick(MoveControlComponent &, Mob &);
    ~HoverMoveControl();
    HoverMoveControl();
};
