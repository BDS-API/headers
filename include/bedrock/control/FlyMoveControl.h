#pragma once

class FlyMoveControl : MoveControl {

public:
    virtual FlyMoveControl::~FlyMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    FlyMoveControl(void);
};
