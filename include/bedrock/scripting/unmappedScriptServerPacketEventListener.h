#pragma once

#include "../../../unmapped/PacketHeader"
#include "../../network/packet/Packet"
#include "../../../unmapped/NetworkPacketEventListener"
#include "../../../unmapped/MinecraftServerScriptEngine"


class ScriptServerPacketEventListener : NetworkPacketEventListener {

public:
    virtual ScriptServerPacketEventListener::~ScriptServerPacketEventListener()
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);

    ScriptServerPacketEventListener(MinecraftServerScriptEngine &);
};
