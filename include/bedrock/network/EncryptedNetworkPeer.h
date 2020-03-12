#pragma once

#include <string>
#include <memory>
#include "NetworkPeer.h"


class EncryptedNetworkPeer : NetworkPeer {

public:
    ~EncryptedNetworkPeer();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    virtual void getNetworkStatus();
    virtual void receivePacket(std::string &);
    bool isEncrypted()const;
    EncryptedNetworkPeer(std::shared_ptr<NetworkPeer>);
    void enableEncryption(std::string const&);
};
