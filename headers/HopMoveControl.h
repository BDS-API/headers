#pragma once

class HopMoveControl : MoveControl {

    virtual ~HopMoveControl();
    virtual ~HopMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
