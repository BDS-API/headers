#pragma once

#include "../../unmapped/MoveControlComponent"


class AmphibiousMoveControl : GenericMoveControl {

public:
    virtual AmphibiousMoveControl::~AmphibiousMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    AmphibiousMoveControl(void);
};
