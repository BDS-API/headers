#pragma once

#include <string>
#include "./NetworkPeer.h"
#include <memory>
#include "./LocalNetworkPeer.h"


class LocalNetworkPeer : NetworkPeer {

public:
    virtual ~LocalNetworkPeer();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus();

    LocalNetworkPeer();
    void setOtherPeer(std::weak_ptr<LocalNetworkPeer>);
    void addIncomingData(std::string);
};
