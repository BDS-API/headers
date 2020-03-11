#pragma once

#include "../actor/Mob.h"
#include "../../unmapped/MoveControlComponent.h"
#include "../util/Vec3.h"
#include "./MoveControl.h"


class HopMoveControl : MoveControl {

public:
    virtual ~HopMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);

    HopMoveControl();
    void _facePoint(Mob &, float, float);
};
