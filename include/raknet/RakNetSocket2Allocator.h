#pragma once

#include "RakNetSocket2.h"


namespace RakNet {

    namespace RakNetSocket2Allocator {

        void AllocRNS2();
        void DeallocRNS2(RakNet::RakNetSocket2 *);
    };
}
