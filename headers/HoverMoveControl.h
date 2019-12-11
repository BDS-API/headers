#pragma once

class HoverMoveControl : MoveControl {

public:
    virtual ~HoverMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);

    void HoverMoveControl(void);
};
