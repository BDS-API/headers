#pragma once

class GenericMoveControl : MoveControl {

public:
    virtual GenericMoveControl::~GenericMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    GenericMoveControl(void);
};
