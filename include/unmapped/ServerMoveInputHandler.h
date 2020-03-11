#pragma once

#include "../bedrock/network/packet/PlayerAuthInputPacket.h"
#include "./MoveInputHandler.h"
#include "../bedrock/actor/Player.h"


class ServerMoveInputHandler : MoveInputHandler {

public:
    virtual ~ServerMoveInputHandler();
    virtual void tick(Player &);
//  virtual void registerInputHandlers(InputHandler &); //TODO: incomplete function definition

    ServerMoveInputHandler();
    void digestPlayerInputPacket(PlayerAuthInputPacket const&);
};
