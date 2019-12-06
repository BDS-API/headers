#pragma once

class RakNetInstance::RakNetNetworkPeer : NetworkPeer {

public:
    virtual ~RakNetNetworkPeer();
    virtual void sendPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    virtual void getNetworkStatus(void);
    virtual void update(void);

    void newData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void RakNetNetworkPeer(RakNet::RakPeerInterface &, NetworkIdentifier const&);
    void getReliability(NetworkPeer::Reliability);
};
