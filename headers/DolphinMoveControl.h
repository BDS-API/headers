#pragma once

class DolphinMoveControl : MoveControl {

    virtual void DolphinMoveControl::~DolphinMoveControl();
    virtual void DolphinMoveControl::~DolphinMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
