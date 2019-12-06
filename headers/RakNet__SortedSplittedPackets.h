#pragma once

class RakNet::SortedSplittedPackets {

public:

    void PacketId(void);
    void AllocSize(void);
    void Get(unsigned int);
    void Preallocate(RakNet::InternalPacket *, char const*, unsigned int);
    void Add(RakNet::InternalPacket *, char const*, unsigned int);
    void AddedPacketsCount(void);
    void SortedSplittedPackets(void);
};
