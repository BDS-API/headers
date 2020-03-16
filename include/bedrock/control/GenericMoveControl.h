#pragma once

#include "MoveControl.h"


class GenericMoveControl : public MoveControl {

public:
    virtual ~GenericMoveControl(); // _ZN18GenericMoveControlD2Ev
    virtual void __fake_function0(); // fake
    virtual void initializeInternal(Mob &, MoveControlDescription *); // _ZN18GenericMoveControl18initializeInternalER3MobP22MoveControlDescription
    virtual void tick(MoveControlComponent &, Mob &); // _ZN18GenericMoveControl4tickER20MoveControlComponentR3Mob
    GenericMoveControl(); // _ZN18GenericMoveControlC2Ev
};
