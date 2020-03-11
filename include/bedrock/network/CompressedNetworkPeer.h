#pragma once

#include "./NetworkPeer.h"
#include <memory>
#include <string>


class CompressedNetworkPeer : NetworkPeer {

public:
    virtual ~CompressedNetworkPeer();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus();

    CompressedNetworkPeer(std::shared_ptr<NetworkPeer>);
};
