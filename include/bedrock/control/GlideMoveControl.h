#pragma once

#include "../description/component/MoveControlDescription.h"
#include "../../unmapped/MoveControlComponent.h"
#include "MoveControl.h"
#include "../actor/Mob.h"


class GlideMoveControl : MoveControl {

public:
    ~GlideMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    GlideMoveControl();
};
