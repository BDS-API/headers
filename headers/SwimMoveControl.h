#pragma once

class SwimMoveControl : MoveControl {

    virtual void Swim~SwimMoveControl();
    virtual void Swim~SwimMoveControl();
    virtual void SwiminitializeInternal(Mob &, MoveControlDescription *);
    virtual void Swimtick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
