#pragma once

class LocalNetworkPeer : NetworkPeer {

public:
    virtual ~LocalNetworkPeer();
    virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus(void);

    void LocalNetworkPeer(void);
    void setOtherPeer(std::weak_ptr<LocalNetworkPeer>);
    void addIncomingData(std::string);
};
