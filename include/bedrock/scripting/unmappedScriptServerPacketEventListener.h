#pragma once

#include "../../../unmapped/NetworkPacketEventListener.h"


class ScriptServerPacketEventListener : public NetworkPacketEventListener {

public:
    virtual ~ScriptServerPacketEventListener(); // _ZN31ScriptServerPacketEventListenerD2Ev
    virtual void __fake_function0(); // fake
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&); // _ZN31ScriptServerPacketEventListener20onPacketReceivedFromERK12PacketHeaderRK6Packet
    ScriptServerPacketEventListener(MinecraftServerScriptEngine &); // _ZN31ScriptServerPacketEventListenerC2ER27MinecraftServerScriptEngine
};
