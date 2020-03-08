#pragma once

#include "../../unmapped/MoveControlComponent"
#include "../actor/Mob"
#include "../description/component/MoveControlDescription"


class SwimMoveControl : MoveControl {

public:
    SwimMoveControl::~SwimMoveControl()
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    SwimMoveControl(void);
};
