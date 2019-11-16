#pragma once

class SlimeMoveControl : MoveControl {

    virtual ~SlimeMoveControl();
    virtual ~SlimeMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
