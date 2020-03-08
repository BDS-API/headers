#pragma once

#include "../../../unmapped/NetworkPacketEventListener"
#include "../../../unmapped/MinecraftServerScriptEngine"
#include "../../../unmapped/PacketHeader"
#include "../../network/packet/Packet"


class ScriptServerPacketEventListener : NetworkPacketEventListener {

public:
    ScriptServerPacketEventListener::~ScriptServerPacketEventListener()
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);

    ScriptServerPacketEventListener(MinecraftServerScriptEngine &);
};
