#pragma once

#include "../bedrock/util/Vec3.h"
#include "./MoveInputHandler.h"
#include "../bedrock/actor/Player.h"


class PlayerMovement {

public:

    bool isGamepadOrMotionController(Player &);
    bool isHoloRealityMode(Player &);
    void updatePlayerOnInput(Player &, MoveInputHandler &, Vec3 &);
    void updateSwimTravel(Player &, MoveInputHandler &, Vec3 &);
    void updatePlayerRiding(Player &, MoveInputHandler &);
};
