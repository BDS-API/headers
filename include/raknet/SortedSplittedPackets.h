#pragma once



namespace RakNet {

    class SortedSplittedPackets {

    public:
        ~SortedSplittedPackets();
        void PacketId();
        void Add(RakNet::InternalPacket *, char const*, unsigned int);
        void AllocSize();
        void AddedPacketsCount();
        void Preallocate(RakNet::InternalPacket *, char const*, unsigned int);
        void Get(unsigned int);
        SortedSplittedPackets();
    };
}
