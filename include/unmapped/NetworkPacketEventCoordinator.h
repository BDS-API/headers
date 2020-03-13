#pragma once



class NetworkPacketEventCoordinator {

public:
    ~NetworkPacketEventCoordinator(); // _ZN29NetworkPacketEventCoordinatorD2Ev
    NetworkPacketEventCoordinator(); // _ZN29NetworkPacketEventCoordinatorC2Ev
    void sendPacketReceivedFrom(PacketHeader const&, Packet const&); // _ZN29NetworkPacketEventCoordinator22sendPacketReceivedFromERK12PacketHeaderRK6Packet
};
