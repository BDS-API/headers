#pragma once

class DolphinMoveControl : MoveControl {

    virtual ~DolphinMoveControl();
    virtual ~DolphinMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
