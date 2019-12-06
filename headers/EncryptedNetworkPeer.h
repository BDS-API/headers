#pragma once

class EncryptedNetworkPeer : NetworkPeer {

public:
    virtual ~EncryptedNetworkPeer();
    virtual void sendPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    virtual void getNetworkStatus(void);

    void EncryptedNetworkPeer(std::shared_ptr<NetworkPeer>);
    void enableEncryption(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool isEncrypted(void)const;
};
