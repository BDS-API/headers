#pragma once



namespace RakNet {

    class SortedSplittedPackets {

    public:
        void PacketId(); // _ZN6RakNet21SortedSplittedPackets8PacketIdEv
        void AllocSize(); // _ZN6RakNet21SortedSplittedPackets9AllocSizeEv
        void Get(unsigned int); // _ZN6RakNet21SortedSplittedPackets3GetEj
        void Preallocate(RakNet::InternalPacket *, char const*, unsigned int); // _ZN6RakNet21SortedSplittedPackets11PreallocateEPNS_14InternalPacketEPKcj
        void Add(RakNet::InternalPacket *, char const*, unsigned int); // _ZN6RakNet21SortedSplittedPackets3AddEPNS_14InternalPacketEPKcj
        void AddedPacketsCount(); // _ZN6RakNet21SortedSplittedPackets17AddedPacketsCountEv
        ~SortedSplittedPackets(); // _ZN6RakNet21SortedSplittedPacketsD2Ev
        SortedSplittedPackets(); // _ZN6RakNet21SortedSplittedPacketsC2Ev
    };
}
