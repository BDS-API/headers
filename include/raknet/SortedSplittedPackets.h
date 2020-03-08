#pragma once



using namespace RakNet;

class SortedSplittedPackets {

public:

    void PacketId();
    void AllocSize();
    void Get(unsigned int);
    void Preallocate(RakNet::InternalPacket *, char const*, unsigned int);
    void Add(RakNet::InternalPacket *, char const*, unsigned int);
    void AddedPacketsCount();
    SortedSplittedPackets(void);
};
