#pragma once

#include "../actor/Mob.h"
#include "./Control.h"
#include "../../unmapped/MoveControlComponent.h"
#include "../description/component/MoveControlDescription.h"
#include "../util/Vec3.h"


class MoveControl : Control {

public:
    static long MIN_SPEED;
    static long MIN_SPEED_SQR;
    static long MIN_DELTA_TO_MOVE;

    virtual ~MoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);

    MoveControl();
};
