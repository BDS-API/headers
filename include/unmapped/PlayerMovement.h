#pragma once

class PlayerMovement {

public:

    bool isGamepadOrMotionController(Player &);
    bool isHoloRealityMode(Player &);
    void updatePlayerOnInput(Player &, MoveInputHandler &, Vec3 &);
    void updateSwimTravel(Player &, MoveInputHandler &, Vec3 &);
    void updatePlayerRiding(Player &, MoveInputHandler &);
};
