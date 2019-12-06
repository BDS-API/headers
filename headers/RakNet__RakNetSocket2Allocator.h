#pragma once

class RakNet::RakNetSocket2Allocator {

public:

    void DeallocRNS2(RakNet::RakNetSocket2 *);
    void AllocRNS2(void);
};
