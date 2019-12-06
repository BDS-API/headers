#pragma once

class GlideMoveControl : MoveControl {

public:
    virtual ~GlideMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    void GlideMoveControl(void);
};
