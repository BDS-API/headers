#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/network/packet/PlayerAuthInputPacket"


class ServerMoveInputHandler : MoveInputHandler {

public:
    ServerMoveInputHandler::~ServerMoveInputHandler()
    virtual void tick(Player &);
    virtual void registerInputHandlers(InputHandler &);

    ServerMoveInputHandler(void);
    void digestPlayerInputPacket(PlayerAuthInputPacket const&);
};
