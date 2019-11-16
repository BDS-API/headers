#pragma once

class HopMoveControl : MoveControl {

    virtual void Hop~HopMoveControl();
    virtual void Hop~HopMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void Hoptick(MoveControlComponent &, Mob &);
    virtual void HopsetWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
