#pragma once

#include "../../unmapped/MoveControlComponent.h"
#include "MoveControl.h"
#include "../actor/Mob.h"


class DolphinMoveControl : MoveControl {

public:
    ~DolphinMoveControl();
    virtual void tick(MoveControlComponent &, Mob &);
    void _clearOfObstacles(Mob const&, float, float, int)const;
    void _handleBreaching(Mob &);
    void _calcRotX(float, float, float);
    DolphinMoveControl();
    void _setupBreach(Mob &);
    void _isInWater(Mob const&)const;
    void _calcRotY(float, float);
};
