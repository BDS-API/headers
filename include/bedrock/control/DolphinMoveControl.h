#pragma once

#include "MoveControl.h"


class DolphinMoveControl : MoveControl {

public:
    virtual void tick(MoveControlComponent &, Mob &);
    ~DolphinMoveControl();
    void _setupBreach(Mob &);
    DolphinMoveControl();
    void _isInWater(Mob const&)const;
    void _clearOfObstacles(Mob const&, float, float, int)const;
    void _handleBreaching(Mob &);
    void _calcRotX(float, float, float);
    void _calcRotY(float, float);
};
