#pragma once

#include "MoveControl.h"


class HopMoveControl : MoveControl {

public:
    ~HopMoveControl();
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
    virtual void tick(MoveControlComponent &, Mob &);
    HopMoveControl();
    void _facePoint(Mob &, float, float);
};
