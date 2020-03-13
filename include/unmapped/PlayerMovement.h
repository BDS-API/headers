#pragma once



namespace PlayerMovement {

    bool isGamepadOrMotionController(Player &); // _ZN14PlayerMovement27isGamepadOrMotionControllerER6Player
    bool isHoloRealityMode(Player &); // _ZN14PlayerMovement17isHoloRealityModeER6Player
    void updatePlayerOnInput(Player &, MoveInputHandler &, Vec3 &); // _ZN14PlayerMovement19updatePlayerOnInputER6PlayerR16MoveInputHandlerR4Vec3
    void updateSwimTravel(Player &, MoveInputHandler &, Vec3 &); // _ZN14PlayerMovement16updateSwimTravelER6PlayerR16MoveInputHandlerR4Vec3
    void updatePlayerRiding(Player &, MoveInputHandler &); // _ZN14PlayerMovement18updatePlayerRidingER6PlayerR16MoveInputHandler
};
