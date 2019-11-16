#pragma once

class RakNet::PluginInterface2 {

    virtual ~PluginInterface2();
    virtual ~PluginInterface2();
    virtual void OnAttach(void);
    virtual void OnDetach(void);
    virtual void Update(void);
    virtual void OnReceive(RakNet::Packet *);
    virtual void OnRakPeerStartup(void);
    virtual void OnRakPeerShutdown(void);
    virtual void OnClosedConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, RakNet::PI2_LostConnectionReason);
    virtual void OnNewConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, bool);
    virtual void OnFailedConnectionAttempt(RakNet::Packet *, RakNet::PI2_FailedConnectionAttemptReason);
    virtual void UsesReliabilityLayer(void)const;
    virtual void OnDirectSocketSend(char const*, unsigned int, RakNet::SystemAddress);
    virtual void OnDirectSocketReceive(char const*, unsigned int, RakNet::SystemAddress);
    virtual void OnReliabilityLayerNotification(char const*, unsigned int, RakNet::SystemAddress, bool);
    virtual void OnInternalPacket(RakNet::InternalPacket *, unsigned int, RakNet::SystemAddress, unsigned int, int);
    virtual void OnAck(unsigned int, RakNet::SystemAddress, unsigned int);
    virtual void OnPushBackPacket(char const*, unsigned int, RakNet::SystemAddress);
}
