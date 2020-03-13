#pragma once

#include "MoveControl.h"


class DolphinMoveControl : MoveControl {

public:
    ~DolphinMoveControl(); // _ZN18DolphinMoveControlD2Ev
    virtual void tick(MoveControlComponent &, Mob &); // _ZN18DolphinMoveControl4tickER20MoveControlComponentR3Mob
    DolphinMoveControl(); // _ZN18DolphinMoveControlC2Ev
    void _handleBreaching(Mob &); // _ZN18DolphinMoveControl16_handleBreachingER3Mob
    void _setupBreach(Mob &); // _ZN18DolphinMoveControl12_setupBreachER3Mob
    void _calcRotY(float, float); // _ZN18DolphinMoveControl9_calcRotYEff
    void _isInWater(Mob const&)const; // _ZNK18DolphinMoveControl10_isInWaterERK3Mob
    void _calcRotX(float, float, float); // _ZN18DolphinMoveControl9_calcRotXEfff
    void _clearOfObstacles(Mob const&, float, float, int)const; // _ZNK18DolphinMoveControl17_clearOfObstaclesERK3Mobffi
};
