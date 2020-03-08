#pragma once

#include "../actor/Mob"
#include "../../unmapped/MoveControlComponent"
#include "../util/Vec3"
#include "../description/component/MoveControlDescription"


class MoveControl : Control {

public:
    static long MIN_SPEED;
    static long MIN_SPEED_SQR;
    static long MIN_DELTA_TO_MOVE;

    virtual MoveControl::~MoveControl()
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);

    MoveControl(void);
};
