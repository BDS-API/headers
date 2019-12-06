#pragma once

class CompressedNetworkPeer : NetworkPeer {

public:
    virtual ~CompressedNetworkPeer();
    virtual void sendPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    virtual void getNetworkStatus(void);

    void CompressedNetworkPeer(std::shared_ptr<NetworkPeer>);
};
