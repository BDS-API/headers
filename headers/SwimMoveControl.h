#pragma once

class SwimMoveControl : MoveControl {

    virtual void SwimMoveControl::~SwimMoveControl();
    virtual void SwimMoveControl::~SwimMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
