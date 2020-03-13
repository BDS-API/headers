#pragma once

#include "MoveControl.h"


class GlideMoveControl : MoveControl {

public:
    ~GlideMoveControl(); // _ZN16GlideMoveControlD2Ev
    virtual void initializeInternal(Mob &, MoveControlDescription *); // _ZN16GlideMoveControl18initializeInternalER3MobP22MoveControlDescription
    virtual void tick(MoveControlComponent &, Mob &); // _ZN16GlideMoveControl4tickER20MoveControlComponentR3Mob
    GlideMoveControl(); // _ZN16GlideMoveControlC2Ev
};
