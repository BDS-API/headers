#pragma once

class SwimMoveControl : MoveControl {

public:
    virtual ~SwimMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    void SwimMoveControl(void);
};
