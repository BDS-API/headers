#pragma once

#include "../description/component/MoveControlDescription.h"
#include "../../unmapped/MoveControlComponent.h"
#include "MoveControl.h"
#include "../actor/Mob.h"


class SwimMoveControl : MoveControl {

public:
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    ~SwimMoveControl();
    SwimMoveControl();
};
