#pragma once

class HoverMoveControl : MoveControl {

public:
    virtual HoverMoveControl::~HoverMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    HoverMoveControl(void);
};
