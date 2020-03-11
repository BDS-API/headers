#pragma once

#include "./RakNetSocket2.h"


namespace RakNet {

class IRNS2_Berkley : RakNet::RakNetSocket2 {

public:
    virtual ~IRNS2_Berkley();

    bool IsPortInUse(unsigned short, char const*, unsigned short, int);
    IRNS2_Berkley();
};

}