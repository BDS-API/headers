#pragma once

#include "Control.h"


class MoveControl : Control {

public:
    static long MIN_SPEED;
    static long MIN_SPEED_SQR;
    static long MIN_DELTA_TO_MOVE;

    ~MoveControl(); // _ZN11MoveControlD2Ev
    virtual void initializeInternal(Mob &, MoveControlDescription *); // _ZN11MoveControl18initializeInternalER3MobP22MoveControlDescription
    virtual void tick(MoveControlComponent &, Mob &); // _ZN11MoveControl4tickER20MoveControlComponentR3Mob
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float); // _ZN11MoveControl17setWantedPositionER20MoveControlComponentR3MobRK4Vec3f
    MoveControl(); // _ZN11MoveControlC2Ev
};
