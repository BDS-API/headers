#pragma once



class NetworkPacketEventCoordinator {

public:
    ~NetworkPacketEventCoordinator();
    NetworkPacketEventCoordinator();
    void sendPacketReceivedFrom(PacketHeader const&, Packet const&);
};
