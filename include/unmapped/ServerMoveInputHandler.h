#pragma once

class ServerMoveInputHandler : MoveInputHandler {

public:
    virtual ServerMoveInputHandler::~ServerMoveInputHandler();
    virtual void tick(Player &);
    virtual void registerInputHandlers(InputHandler &);

    ServerMoveInputHandler(void);
    void digestPlayerInputPacket(PlayerAuthInputPacket const&);
};
