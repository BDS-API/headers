#pragma once

class LocalNetworkPeer : NetworkPeer {

    virtual void Local~LocalNetworkPeer();
    virtual void Local~LocalNetworkPeer();
    virtual void LocalsendPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void LocalreceivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    virtual void LocalgetNetworkStatus(void);
    virtual void update(void);
    virtual void flush(std::function<void ()(void)> &&);
}
