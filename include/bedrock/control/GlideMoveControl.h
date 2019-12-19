#pragma once

class GlideMoveControl : MoveControl {

public:
    virtual GlideMoveControl::~GlideMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    GlideMoveControl(void);
};
