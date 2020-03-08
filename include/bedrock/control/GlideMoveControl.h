#pragma once

#include "../../unmapped/MoveControlComponent"
#include "../actor/Mob"
#include "../description/component/MoveControlDescription"


class GlideMoveControl : MoveControl {

public:
    GlideMoveControl::~GlideMoveControl()
    virtual void initializeInternal(Mob &, MoveControlDescription *);
    virtual void tick(MoveControlComponent &, Mob &);

    GlideMoveControl(void);
};
