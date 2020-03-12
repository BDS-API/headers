#pragma once

#include <string>
#include "NetworkPeer.h"
#include <memory>


class EncryptedNetworkPeer : NetworkPeer {

public:
    virtual void getNetworkStatus();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    ~EncryptedNetworkPeer();
    virtual void receivePacket(std::string &);
    void enableEncryption(std::string const&);
    bool isEncrypted()const;
    EncryptedNetworkPeer(std::shared_ptr<NetworkPeer>);
};
