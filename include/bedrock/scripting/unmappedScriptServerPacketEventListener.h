#pragma once

#include "../../../unmapped/NetworkPacketEventListener.h"
#include "../../network/packet/Packet.h"
#include "../../../unmapped/PacketHeader.h"
#include "../../../unmapped/MinecraftServerScriptEngine.h"


class ScriptServerPacketEventListener : NetworkPacketEventListener {

public:
    virtual ~ScriptServerPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);

    ScriptServerPacketEventListener(MinecraftServerScriptEngine &);
};
