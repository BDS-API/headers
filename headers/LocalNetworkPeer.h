#pragma once

class LocalNetworkPeer : NetworkPeer {

public:
    virtual ~LocalNetworkPeer();
    virtual void sendPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    virtual void getNetworkStatus(void);

    void LocalNetworkPeer(void);
    void setOtherPeer(std::weak_ptr<LocalNetworkPeer>);
    void addIncomingData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
};
