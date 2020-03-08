#pragma once

#include "../../unmapped/MoveControlComponent"
#include "../actor/Mob"
#include "../description/component/MoveControlDescription"


class GenericMoveControl : MoveControl {

public:
    GenericMoveControl::~GenericMoveControl()
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    GenericMoveControl(void);
};
