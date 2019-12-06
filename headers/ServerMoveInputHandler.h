#pragma once

class ServerMoveInputHandler : MoveInputHandler {

public:
    virtual ~ServerMoveInputHandler();
    virtual void tick(Player &);
    virtual void registerInputHandlers(InputHandler &);

    void ServerMoveInputHandler(void);
    void digestPlayerInputPacket(PlayerAuthInputPacket const&);
};
