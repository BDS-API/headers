#pragma once

#include "MoveControl.h"


class HopMoveControl : MoveControl {

public:
    ~HopMoveControl(); // _ZN14HopMoveControlD2Ev
    virtual void tick(MoveControlComponent &, Mob &); // _ZN14HopMoveControl4tickER20MoveControlComponentR3Mob
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float); // _ZN14HopMoveControl17setWantedPositionER20MoveControlComponentR3MobRK4Vec3f
    HopMoveControl(); // _ZN14HopMoveControlC2Ev
    void _facePoint(Mob &, float, float); // _ZN14HopMoveControl10_facePointER3Mobff
};
