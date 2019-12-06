#pragma once

class MoveControl : Control {

public:
    static long MoveControl::MIN_SPEED;
    static long MoveControl::MIN_SPEED_SQR;
    static long MoveControl::MIN_DELTA_TO_MOVE;

    virtual ~MoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);
    virtual void setWantedPosition(MoveControlComponent &, Mob &, Vec3 const&, float);

    void MoveControl(void);
};
