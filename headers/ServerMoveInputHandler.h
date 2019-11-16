#pragma once

class ServerMoveInputHandler : MoveInputHandler {

    virtual void Server~ServerMoveInputHandler();
    virtual void Server~ServerMoveInputHandler();
    virtual void Servertick(Player &);
    virtual void MoveInput::render(float);
    virtual void MoveInput::setKey(int, bool);
    virtual void clearInputState(void);
    virtual void MoveInput::clearMovementState(void);
    virtual void MoveInput::allowPicking(float, float);
    virtual void MoveInput::setJumping(bool);
    virtual void MoveInput::setAutoJumpingInWater(bool);
    virtual void isChangeHeight(void)const;
    virtual void MoveInput::setSneakDown(bool);
    virtual void isPlayerMoving(void)const;
    virtual void fillInputPacket(PlayerAuthInputPacket &);
    virtual void ServerregisterInputHandlers(InputHandler &);
}
