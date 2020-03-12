#pragma once

#include "../bedrock/actor/Player.h"
#include "MoveInputHandler.h"
#include "../bedrock/util/Vec3.h"


namespace PlayerMovement {

    void updatePlayerOnInput(Player &, MoveInputHandler &, Vec3 &);
    bool isGamepadOrMotionController(Player &);
    bool isHoloRealityMode(Player &);
    void updateSwimTravel(Player &, MoveInputHandler &, Vec3 &);
    void updatePlayerRiding(Player &, MoveInputHandler &);
};
