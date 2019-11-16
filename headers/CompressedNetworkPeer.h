#pragma once

class CompressedNetworkPeer : NetworkPeer {

    virtual void Compressed~CompressedNetworkPeer();
    virtual void Compressed~CompressedNetworkPeer();
    virtual void CompressedsendPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void CompressedreceivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    virtual void CompressedgetNetworkStatus(void);
    virtual void update(void);
    virtual void flush(std::function<void ()(void)> &&);
}
