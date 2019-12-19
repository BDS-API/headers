#pragma once

class ScriptServerPacketEventListener : NetworkPacketEventListener {

public:
    virtual ScriptServerPacketEventListener::~ScriptServerPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);

    ScriptServerPacketEventListener(MinecraftServerScriptEngine &);
};
