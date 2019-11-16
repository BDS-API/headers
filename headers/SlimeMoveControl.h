#pragma once

class SlimeMoveControl : MoveControl {

    virtual void SlimeMoveControl::~SlimeMoveControl();
    virtual void SlimeMoveControl::~SlimeMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
