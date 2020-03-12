#pragma once

#include <string>
#include "NetworkPeer.h"
#include <memory>


class LocalNetworkPeer : NetworkPeer {

public:
    virtual void getNetworkStatus();
    virtual void receivePacket(std::string &);
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    ~LocalNetworkPeer();
    void setOtherPeer(std::weak_ptr<LocalNetworkPeer>);
    LocalNetworkPeer();
    void addIncomingData(std::string);
};
