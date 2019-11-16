#pragma once

class AmphibiousMoveControl : GenericMoveControl {

    virtual void ~AmphibiousMoveControl();
    virtual void ~AmphibiousMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void MoveControl::setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
