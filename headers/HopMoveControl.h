#pragma once

class HopMoveControl : MoveControl {

public:
    virtual ~HopMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);

    void HopMoveControl(void);
    void _facePoint(Mob &, float, float);
};
