#pragma once

class ScriptServerPacketEventListener : NetworkPacketEventListener {

public:
    virtual ~ScriptServerPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);

    void ScriptServerPacketEventListener(MinecraftServerScriptEngine &);
};
