#pragma once

#include <string>
#include <memory>
#include "NetworkPeer.h"


class CompressedNetworkPeer : NetworkPeer {

public:
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    ~CompressedNetworkPeer();
    CompressedNetworkPeer(std::shared_ptr<NetworkPeer>);
};
