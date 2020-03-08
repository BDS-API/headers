#pragma once

#include "../actor/Mob"
#include "../../unmapped/MoveControlComponent"


class HoverMoveControl : MoveControl {

public:
    virtual HoverMoveControl::~HoverMoveControl()
    virtual void tick(MoveControlComponent &, Mob &);

    HoverMoveControl(void);
};
