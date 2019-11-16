#pragma once

class MoveControl : Control {

    virtual void Move~MoveControl();
    virtual void Move~MoveControl();
    virtual void MoveinitializeInternal(Mob &, MoveControlDescription *);
    virtual void Movetick(MoveControlComponent &, Mob &);
    virtual void MovesetWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
