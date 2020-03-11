#pragma once

#include "../actor/Mob.h"
#include "../../unmapped/MoveControlComponent.h"
#include "../description/component/MoveControlDescription.h"
#include "./MoveControl.h"


class GlideMoveControl : MoveControl {

public:
    virtual ~GlideMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    GlideMoveControl();
};
