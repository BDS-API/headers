#pragma once

class GlideMoveControl : MoveControl {

    virtual void Glide~GlideMoveControl();
    virtual void Glide~GlideMoveControl();
    virtual void GlideinitializeInternal(Mob &, MoveControlDescription *);
    virtual void Glidetick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);
}
