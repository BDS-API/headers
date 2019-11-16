#pragma once

class EncryptedNetworkPeer : NetworkPeer {

    virtual void EncryptedNetworkPeer::~EncryptedNetworkPeer();
    virtual void EncryptedNetworkPeer::~EncryptedNetworkPeer();
    virtual void sendPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    virtual void getNetworkStatus(void);
    virtual void update(void);
    virtual void flush(std::function<void ()(void)> &&);
}
