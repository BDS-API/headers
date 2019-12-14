#pragma once

class EncryptedNetworkPeer : NetworkPeer {

public:
    virtual ~EncryptedNetworkPeer();
    virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus(void);

    void EncryptedNetworkPeer(std::shared_ptr<NetworkPeer>);
    void enableEncryption(std::string const&);
    bool isEncrypted(void)const;
};
