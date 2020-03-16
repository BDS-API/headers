#pragma once

#include "GenericMoveControl.h"


class AmphibiousMoveControl : public GenericMoveControl {

public:
    virtual ~AmphibiousMoveControl(); // _ZN21AmphibiousMoveControlD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(MoveControlComponent &, Mob &); // _ZN21AmphibiousMoveControl4tickER20MoveControlComponentR3Mob
    AmphibiousMoveControl(); // _ZN21AmphibiousMoveControlC2Ev
};
