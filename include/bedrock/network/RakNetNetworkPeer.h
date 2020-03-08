#pragma once

#include "../../unmapped/NetworkIdentifier"
#include "../../raknet/RakPeerInterface"


using namespace RakNetInstance;

class RakNetNetworkPeer : NetworkPeer {

public:
    virtual RakNetInstance::RakNetNetworkPeer::~RakNetNetworkPeer()
    virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus();
    virtual void update();

    void newData(std::string);
    RakNetNetworkPeer(RakNet::RakPeerInterface &, NetworkIdentifier const&);
    void getReliability(NetworkPeer::Reliability);
};
