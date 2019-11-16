#pragma once

class FlyMoveControl : MoveControl {

    virtual void FlyMoveControl::~FlyMoveControl();
    virtual void FlyMoveControl::~FlyMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
