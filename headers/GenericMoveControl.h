#pragma once

class GenericMoveControl : MoveControl {

    virtual void Generic~GenericMoveControl();
    virtual void Generic~GenericMoveControl();
    virtual void GenericinitializeInternal(Mob &, MoveControlDescription *);
    virtual void Generictick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
