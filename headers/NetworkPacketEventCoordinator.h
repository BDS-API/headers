#pragma once

class NetworkPacketEventCoordinator {

public:

    void NetworkPacketEventCoordinator(void);
    void sendPacketReceivedFrom(PacketHeader const&, Packet const&);
};
