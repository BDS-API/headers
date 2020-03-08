#pragma once

#include "../../unmapped/MoveControlComponent"
#include "../actor/Mob"


class FlyMoveControl : MoveControl {

public:
    FlyMoveControl::~FlyMoveControl()
    virtual void tick(MoveControlComponent &, Mob &);

    FlyMoveControl(void);
};
