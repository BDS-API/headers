#pragma once

class GenericMoveControl : MoveControl {

    virtual void GenericMoveControl::~GenericMoveControl();
    virtual void GenericMoveControl::~GenericMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
