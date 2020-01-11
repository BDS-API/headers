#pragma once

class SwimMoveControl : MoveControl {

public:
    virtual SwimMoveControl::~SwimMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    SwimMoveControl(void);
};