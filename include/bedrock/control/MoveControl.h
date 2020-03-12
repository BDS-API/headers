#pragma once

#include "../description/component/MoveControlDescription.h"
#include "Control.h"
#include "../util/Vec3.h"
#include "../actor/Mob.h"
#include "../../unmapped/MoveControlComponent.h"


class MoveControl : Control {

public:
    static long MIN_SPEED;
    static long MIN_SPEED_SQR;
    static long MIN_DELTA_TO_MOVE;

    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
    virtual void tick(MoveControlComponent &, Mob &);
    ~MoveControl();
    MoveControl();
};
