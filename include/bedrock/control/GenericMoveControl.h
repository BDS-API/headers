#pragma once

#include "MoveControl.h"


class GenericMoveControl : MoveControl {

public:
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    ~GenericMoveControl();
    GenericMoveControl();
};
