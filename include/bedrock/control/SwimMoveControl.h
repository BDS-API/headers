#pragma once

#include "MoveControl.h"


class SwimMoveControl : MoveControl {

public:
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    ~SwimMoveControl();
    SwimMoveControl();
};
