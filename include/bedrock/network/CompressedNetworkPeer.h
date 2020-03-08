#pragma once



class CompressedNetworkPeer : NetworkPeer {

public:
    CompressedNetworkPeer::~CompressedNetworkPeer()
    virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus();

    CompressedNetworkPeer(std::shared_ptr<NetworkPeer>);
};
