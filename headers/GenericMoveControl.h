#pragma once

class GenericMoveControl : MoveControl {

    virtual ~GenericMoveControl();
    virtual ~GenericMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
