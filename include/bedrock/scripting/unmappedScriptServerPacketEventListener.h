#pragma once

#include "../../../unmapped/NetworkPacketEventListener.h"
#include "../../../unmapped/MinecraftServerScriptEngine.h"
#include "../../../unmapped/PacketHeader.h"
#include "../../network/packet/Packet.h"


class ScriptServerPacketEventListener : NetworkPacketEventListener {

public:
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);
    ~ScriptServerPacketEventListener();
    ScriptServerPacketEventListener(MinecraftServerScriptEngine &);
};
