#pragma once



namespace PlayerMovement {

    bool isHoloRealityMode(Player &);
    void updateSwimTravel(Player &, MoveInputHandler &, Vec3 &);
    bool isGamepadOrMotionController(Player &);
    void updatePlayerOnInput(Player &, MoveInputHandler &, Vec3 &);
    void updatePlayerRiding(Player &, MoveInputHandler &);
};
