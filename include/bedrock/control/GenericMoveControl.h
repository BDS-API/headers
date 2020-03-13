#pragma once

#include "MoveControl.h"


class GenericMoveControl : MoveControl {

public:
    ~GenericMoveControl(); // _ZN18GenericMoveControlD2Ev
    virtual void initializeInternal(Mob &, MoveControlDescription *); // _ZN18GenericMoveControl18initializeInternalER3MobP22MoveControlDescription
    virtual void tick(MoveControlComponent &, Mob &); // _ZN18GenericMoveControl4tickER20MoveControlComponentR3Mob
    GenericMoveControl(); // _ZN18GenericMoveControlC2Ev
};
