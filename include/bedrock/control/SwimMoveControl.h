#pragma once

#include "MoveControl.h"


class SwimMoveControl : MoveControl {

public:
    ~SwimMoveControl(); // _ZN15SwimMoveControlD2Ev
    virtual void initializeInternal(Mob &, MoveControlDescription *); // _ZN15SwimMoveControl18initializeInternalER3MobP22MoveControlDescription
    virtual void tick(MoveControlComponent &, Mob &); // _ZN15SwimMoveControl4tickER20MoveControlComponentR3Mob
    SwimMoveControl(); // _ZN15SwimMoveControlC2Ev
};
