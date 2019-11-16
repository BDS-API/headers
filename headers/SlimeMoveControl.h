#pragma once

class SlimeMoveControl : MoveControl {

    virtual void Slime~SlimeMoveControl();
    virtual void Slime~SlimeMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void Slimetick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
