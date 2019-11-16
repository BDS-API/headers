#pragma once

class EncryptedNetworkPeer : NetworkPeer {

    virtual void Encrypted~EncryptedNetworkPeer();
    virtual void Encrypted~EncryptedNetworkPeer();
    virtual void EncryptedsendPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void EncryptedreceivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    virtual void EncryptedgetNetworkStatus(void);
    virtual void update(void);
    virtual void flush(std::function<void ()(void)> &&);
}
