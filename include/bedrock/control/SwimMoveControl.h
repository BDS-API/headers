#pragma once

#include "../actor/Mob.h"
#include "../../unmapped/MoveControlComponent.h"
#include "../description/component/MoveControlDescription.h"
#include "./MoveControl.h"


class SwimMoveControl : MoveControl {

public:
    virtual ~SwimMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    SwimMoveControl();
};
