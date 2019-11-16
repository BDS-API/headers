#pragma once

class HopMoveControl : MoveControl {

    virtual void HopMoveControl::~HopMoveControl();
    virtual void HopMoveControl::~HopMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
