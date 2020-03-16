#pragma once

#include "MoveControl.h"


class SwimMoveControl : public MoveControl {

public:
    virtual ~SwimMoveControl(); // _ZN15SwimMoveControlD2Ev
    virtual void __fake_function0(); // fake
    virtual void initializeInternal(Mob &, MoveControlDescription *); // _ZN15SwimMoveControl18initializeInternalER3MobP22MoveControlDescription
    virtual void tick(MoveControlComponent &, Mob &); // _ZN15SwimMoveControl4tickER20MoveControlComponentR3Mob
    SwimMoveControl(); // _ZN15SwimMoveControlC2Ev
};
