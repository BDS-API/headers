#pragma once

#include "../actor/Mob"
#include "../../unmapped/MoveControlComponent"


class DolphinMoveControl : MoveControl {

public:
    virtual DolphinMoveControl::~DolphinMoveControl()
    virtual void tick(MoveControlComponent &, Mob &);

    DolphinMoveControl(void);
    void _handleBreaching(Mob &);
    void _setupBreach(Mob &);
    void _calcRotY(float, float);
    void _isInWater(Mob const&)const;
    void _calcRotX(float, float, float);
    void _clearOfObstacles(Mob const&, float, float, int)const;
};
