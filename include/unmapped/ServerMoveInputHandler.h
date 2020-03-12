#pragma once

#include "../bedrock/network/packet/PlayerAuthInputPacket.h"
#include "../bedrock/actor/Player.h"
#include "MoveInputHandler.h"


class ServerMoveInputHandler : MoveInputHandler {

public:
//  virtual void registerInputHandlers(InputHandler &); //TODO: incomplete function definition
    ~ServerMoveInputHandler();
    virtual void tick(Player &);
    ServerMoveInputHandler();
    void digestPlayerInputPacket(PlayerAuthInputPacket const&);
};
