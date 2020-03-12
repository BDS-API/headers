#pragma once

#include <string>
#include "NetworkPeer.h"
#include <memory>


class CompressedNetworkPeer : NetworkPeer {

public:
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus();
    ~CompressedNetworkPeer();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    CompressedNetworkPeer(std::shared_ptr<NetworkPeer>);
};
