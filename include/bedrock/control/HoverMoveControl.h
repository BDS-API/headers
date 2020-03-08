#pragma once

#include "../../unmapped/MoveControlComponent"
#include "../actor/Mob"


class HoverMoveControl : MoveControl {

public:
    HoverMoveControl::~HoverMoveControl()
    virtual void tick(MoveControlComponent &, Mob &);

    HoverMoveControl(void);
};
