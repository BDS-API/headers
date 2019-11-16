#pragma once

class FlyMoveControl : MoveControl {

    virtual void Fly~FlyMoveControl();
    virtual void Fly~FlyMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void Flytick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
