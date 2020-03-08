#pragma once



using namespace RakNet;

class RakNetSocket2Allocator {

public:

    void DeallocRNS2(RakNet::RakNetSocket2 *);
    void AllocRNS2();
};
