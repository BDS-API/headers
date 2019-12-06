#pragma once

class GenericMoveControl : MoveControl {

public:
    virtual ~GenericMoveControl();
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    void GenericMoveControl(void);
};
