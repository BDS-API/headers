#pragma once

#include <memory>
#include <string>
#include "NetworkPeer.h"


class LocalNetworkPeer : NetworkPeer {

public:
    ~LocalNetworkPeer();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    virtual void getNetworkStatus();
    virtual void receivePacket(std::string &);
    LocalNetworkPeer();
    void addIncomingData(std::string);
    void setOtherPeer(std::weak_ptr<LocalNetworkPeer>);
};
