#pragma once

class AmphibiousMoveControl : GenericMoveControl {

    virtual ~AmphibiousMoveControl();
    virtual ~AmphibiousMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
