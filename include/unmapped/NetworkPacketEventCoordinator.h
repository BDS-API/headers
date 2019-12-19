#pragma once

class NetworkPacketEventCoordinator {

public:

    NetworkPacketEventCoordinator(void);
    void sendPacketReceivedFrom(PacketHeader const&, Packet const&);
};
