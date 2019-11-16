#pragma once

class GlideMoveControl : MoveControl {

    virtual ~GlideMoveControl();
    virtual ~GlideMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
