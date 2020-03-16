#pragma once

#include "RakNetSocket2.h"


namespace RakNet {

    class IRNS2_Berkley : public RakNet::RakNetSocket2 {

    public:
        virtual ~IRNS2_Berkley(); // _ZN6RakNet13IRNS2_BerkleyD2Ev
        virtual void __fake_function0(); // fake
        bool IsPortInUse(unsigned short, char const*, unsigned short, int); // _ZN6RakNet13IRNS2_Berkley11IsPortInUseEtPKcti
        IRNS2_Berkley(); // _ZN6RakNet13IRNS2_BerkleyC2Ev
    };
}
