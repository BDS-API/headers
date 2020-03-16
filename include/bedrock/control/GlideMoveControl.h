#pragma once

#include "MoveControl.h"


class GlideMoveControl : public MoveControl {

public:
    virtual ~GlideMoveControl(); // _ZN16GlideMoveControlD2Ev
    virtual void __fake_function0(); // fake
    virtual void initializeInternal(Mob &, MoveControlDescription *); // _ZN16GlideMoveControl18initializeInternalER3MobP22MoveControlDescription
    virtual void tick(MoveControlComponent &, Mob &); // _ZN16GlideMoveControl4tickER20MoveControlComponentR3Mob
    GlideMoveControl(); // _ZN16GlideMoveControlC2Ev
};
