#pragma once

#include "MoveInputHandler.h"


class ServerMoveInputHandler : MoveInputHandler {

public:
//  virtual void registerInputHandlers(InputHandler &); //TODO: incomplete function definition
    virtual void tick(Player &);
    ~ServerMoveInputHandler();
    void digestPlayerInputPacket(PlayerAuthInputPacket const&);
    ServerMoveInputHandler();
};
