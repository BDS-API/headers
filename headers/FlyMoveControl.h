#pragma once

class FlyMoveControl : MoveControl {

public:
    virtual ~FlyMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    void FlyMoveControl(void);
};
