#pragma once

class MoveInputHandler : MoveInput {

    virtual void MoveInputHandler::~MoveInputHandler();
    virtual void MoveInputHandler::~MoveInputHandler();
    virtual void tick(Player &);
    virtual void render(float);
    virtual void setKey(int, bool);
    virtual void clearInputState(void);
    virtual void clearMovementState(void);
    virtual void allowPicking(float, float);
    virtual void setJumping(bool);
    virtual void setAutoJumpingInWater(bool);
    virtual void isChangeHeight(void)const;
    virtual void setSneakDown(bool);
    virtual void isPlayerMoving(void)const;
    virtual void fillInputPacket(PlayerAuthInputPacket &);
    virtual void registerInputHandlers(InputHandler &);
}
