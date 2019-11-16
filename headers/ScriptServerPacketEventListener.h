#pragma once

class ScriptServerPacketEventListener : NetworkPacketEventListener {

    virtual ~ScriptServerPacketEventListener();
    virtual ~ScriptServerPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);
}
