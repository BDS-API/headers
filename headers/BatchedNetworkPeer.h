#pragma once

class BatchedNetworkPeer : NetworkPeer {

    virtual void Batched~BatchedNetworkPeer();
    virtual void Batched~BatchedNetworkPeer();
    virtual void BatchedsendPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void BatchedreceivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    virtual void BatchedgetNetworkStatus(void);
    virtual void Batchedupdate(void);
    virtual void Batchedflush(std::function<void ()(void)> &&);
}
