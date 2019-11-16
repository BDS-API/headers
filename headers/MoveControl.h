#pragma once

class MoveControl : Control {

    virtual void MoveControl::~MoveControl();
    virtual void MoveControl::~MoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
