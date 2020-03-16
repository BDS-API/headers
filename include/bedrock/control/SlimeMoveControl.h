#pragma once

#include "MoveControl.h"


class SlimeMoveControl : public MoveControl {

public:
    virtual ~SlimeMoveControl(); // _ZN16SlimeMoveControlD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(MoveControlComponent &, Mob &); // _ZN16SlimeMoveControl4tickER20MoveControlComponentR3Mob
    SlimeMoveControl(); // _ZN16SlimeMoveControlC2Ev
    void _getJumpDelay(Mob &)const; // _ZNK16SlimeMoveControl13_getJumpDelayER3Mob
};
