#pragma once

#include "RakNetSocket2.h"


namespace RakNet {

    class IRNS2_Berkley : RakNet::RakNetSocket2 {

    public:
        ~IRNS2_Berkley(); // _ZN6RakNet13IRNS2_BerkleyD2Ev
        bool IsPortInUse(unsigned short, char const*, unsigned short, int); // _ZN6RakNet13IRNS2_Berkley11IsPortInUseEtPKcti
        IRNS2_Berkley(); // _ZN6RakNet13IRNS2_BerkleyC2Ev
    };
}
