#pragma once

class DolphinMoveControl : MoveControl {

    virtual void Dolphin~DolphinMoveControl();
    virtual void Dolphin~DolphinMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void Dolphintick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
