#pragma once

#include "../../unmapped/MoveControlComponent.h"
#include "MoveControl.h"
#include "../util/Vec3.h"
#include "../actor/Mob.h"


class HopMoveControl : MoveControl {

public:
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
    virtual void tick(MoveControlComponent &, Mob &);
    ~HopMoveControl();
    HopMoveControl();
    void _facePoint(Mob &, float, float);
};
