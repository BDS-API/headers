#pragma once

using namespace RakNetInstance;

class RakNetNetworkPeer : NetworkPeer {

public:
    virtual void RakNetInstance::RakNetNetworkPeer::~RakNetNetworkPeer();
    virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus(void);
    virtual void update(void);

    void newData(std::string);
    RakNetNetworkPeer(RakNet::RakPeerInterface &, NetworkIdentifier const&);
    void getReliability(NetworkPeer::Reliability);
};
