#pragma once

#include "../../../unmapped/NetworkPacketEventListener.h"


class ScriptServerPacketEventListener : NetworkPacketEventListener {

public:
    ~ScriptServerPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);
    ScriptServerPacketEventListener(MinecraftServerScriptEngine &);
};
