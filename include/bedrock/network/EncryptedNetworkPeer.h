#pragma once

#include "./NetworkPeer.h"
#include <memory>
#include <string>


class EncryptedNetworkPeer : NetworkPeer {

public:
    virtual ~EncryptedNetworkPeer();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus();

    EncryptedNetworkPeer(std::shared_ptr<NetworkPeer>);
    void enableEncryption(std::string const&);
    bool isEncrypted()const;
};
