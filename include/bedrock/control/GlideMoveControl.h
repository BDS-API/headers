#pragma once

#include "MoveControl.h"


class GlideMoveControl : MoveControl {

public:
    ~GlideMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    GlideMoveControl();
};
