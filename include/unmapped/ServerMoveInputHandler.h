#pragma once

#include "MoveInputHandler.h"


class ServerMoveInputHandler : public MoveInputHandler {

public:
    virtual ~ServerMoveInputHandler(); // _ZN22ServerMoveInputHandlerD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Player &); // _ZN22ServerMoveInputHandler4tickER6Player
    virtual void registerInputHandlers__incomplete0(long &); //TODO: incomplete function definition // _ZN22ServerMoveInputHandler21registerInputHandlersER12InputHandler
    ServerMoveInputHandler(); // _ZN22ServerMoveInputHandlerC2Ev
    void digestPlayerInputPacket(PlayerAuthInputPacket const&); // _ZN22ServerMoveInputHandler23digestPlayerInputPacketERK21PlayerAuthInputPacket
};
