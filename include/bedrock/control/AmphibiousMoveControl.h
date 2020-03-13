#pragma once

#include "GenericMoveControl.h"


class AmphibiousMoveControl : GenericMoveControl {

public:
    ~AmphibiousMoveControl(); // _ZN21AmphibiousMoveControlD2Ev
    virtual void tick(MoveControlComponent &, Mob &); // _ZN21AmphibiousMoveControl4tickER20MoveControlComponentR3Mob
    AmphibiousMoveControl(); // _ZN21AmphibiousMoveControlC2Ev
};
