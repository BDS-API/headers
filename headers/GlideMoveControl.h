#pragma once

class GlideMoveControl : MoveControl {

    virtual void GlideMoveControl::~GlideMoveControl();
    virtual void GlideMoveControl::~GlideMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
