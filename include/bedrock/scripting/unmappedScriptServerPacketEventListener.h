#pragma once

#include "../../../unmapped/NetworkPacketEventListener.h"


class ScriptServerPacketEventListener : NetworkPacketEventListener {

public:
    ~ScriptServerPacketEventListener(); // _ZN31ScriptServerPacketEventListenerD2Ev
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&); // _ZN31ScriptServerPacketEventListener20onPacketReceivedFromERK12PacketHeaderRK6Packet
    ScriptServerPacketEventListener(MinecraftServerScriptEngine &); // _ZN31ScriptServerPacketEventListenerC2ER27MinecraftServerScriptEngine
};
