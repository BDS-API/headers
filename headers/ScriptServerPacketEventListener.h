#pragma once

class ScriptServerPacketEventListener : NetworkPacketEventListener {

    virtual void ~ScriptServerPacketEventListener();
    virtual void ~ScriptServerPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);
}
