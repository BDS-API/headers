#pragma once

#include "./NetworkPeer.h"
#include "../../raknet/RakPeerInterface.h"
#include "../../unmapped/NetworkIdentifier.h"
#include <string>


namespace RakNetInstance {

class RakNetNetworkPeer : NetworkPeer {

public:
    virtual ~RakNetNetworkPeer();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus();
    virtual void update();

    void newData(std::string);
    RakNetNetworkPeer(RakNet::RakPeerInterface &, NetworkIdentifier const&);
//  void getReliability(NetworkPeer::Reliability); //TODO: incomplete function definition
};

}