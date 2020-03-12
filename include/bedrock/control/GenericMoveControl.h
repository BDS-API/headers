#pragma once

#include "../description/component/MoveControlDescription.h"
#include "../../unmapped/MoveControlComponent.h"
#include "MoveControl.h"
#include "../actor/Mob.h"


class GenericMoveControl : MoveControl {

public:
    virtual void tick(MoveControlComponent &, Mob &);
    ~GenericMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    GenericMoveControl();
};
