#pragma once

#include "../actor/Mob"
#include "../../unmapped/MoveControlComponent"


class FlyMoveControl : MoveControl {

public:
    virtual FlyMoveControl::~FlyMoveControl()
    virtual void tick(MoveControlComponent &, Mob &);

    FlyMoveControl(void);
};
