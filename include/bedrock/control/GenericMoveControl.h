#pragma once

#include "../actor/Mob"
#include "../description/component/MoveControlDescription"
#include "../../unmapped/MoveControlComponent"


class GenericMoveControl : MoveControl {

public:
    virtual GenericMoveControl::~GenericMoveControl()
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    GenericMoveControl(void);
};
