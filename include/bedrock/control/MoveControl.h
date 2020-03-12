#pragma once

#include "Control.h"


class MoveControl : Control {

public:
    static long MIN_SPEED;
    static long MIN_SPEED_SQR;
    static long MIN_DELTA_TO_MOVE;

    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    ~MoveControl();
    MoveControl();
};
