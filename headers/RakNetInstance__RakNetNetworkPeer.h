#pragma once

class RakNetInstance::RakNetNetworkPeer : NetworkPeer {

public:
    virtual ~RakNetNetworkPeer();
    virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus(void);
    virtual void update(void);

    void newData(std::string);
    void RakNetNetworkPeer(RakNet::RakPeerInterface &, NetworkIdentifier const&);
    void getReliability(NetworkPeer::Reliability);
};
