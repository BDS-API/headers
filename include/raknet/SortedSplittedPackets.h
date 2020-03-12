#pragma once

#include "InternalPacket.h"


namespace RakNet {

    class SortedSplittedPackets {

    public:
        void Add(RakNet::InternalPacket *, char const*, unsigned int);
        void AllocSize();
        SortedSplittedPackets();
        void Preallocate(RakNet::InternalPacket *, char const*, unsigned int);
        void Get(unsigned int);
        void AddedPacketsCount();
        void PacketId();
        ~SortedSplittedPackets();
    };
}
