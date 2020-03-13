#pragma once

#include "MoveInputHandler.h"


class ServerMoveInputHandler : MoveInputHandler {

public:
    ~ServerMoveInputHandler(); // _ZN22ServerMoveInputHandlerD2Ev
    virtual void tick(Player &); // _ZN22ServerMoveInputHandler4tickER6Player
//  virtual void registerInputHandlers(InputHandler &); //TODO: incomplete function definition // _ZN22ServerMoveInputHandler21registerInputHandlersER12InputHandler
    ServerMoveInputHandler(); // _ZN22ServerMoveInputHandlerC2Ev
    void digestPlayerInputPacket(PlayerAuthInputPacket const&); // _ZN22ServerMoveInputHandler23digestPlayerInputPacketERK21PlayerAuthInputPacket
};
