#pragma once

#include "../actor/Mob"
#include "../../unmapped/MoveControlComponent"
#include "../util/Vec3"


class HopMoveControl : MoveControl {

public:
    virtual HopMoveControl::~HopMoveControl()
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);

    HopMoveControl(void);
    void _facePoint(Mob &, float, float);
};
