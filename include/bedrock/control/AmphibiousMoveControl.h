#pragma once

#include "../../unmapped/MoveControlComponent"
#include "../actor/Mob"


class AmphibiousMoveControl : GenericMoveControl {

public:
    AmphibiousMoveControl::~AmphibiousMoveControl()
    virtual void tick(MoveControlComponent &, Mob &);

    AmphibiousMoveControl(void);
};
