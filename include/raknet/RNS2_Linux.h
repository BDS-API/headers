#pragma once

#include "RNS2_Berkley.h"
#include "RNS2_Windows_Linux_360.h"


namespace RakNet {

    class RNS2_Linux : RakNet::RNS2_Berkley, RakNet::RNS2_Windows_Linux_360 {

    public:
        ~RNS2_Linux();
        virtual void Send(RakNet::RNS2_SendParameters *, char const*, unsigned int);
//      virtual void Bind(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
        RNS2_Linux();
        void GetMyAdapters(RakNet::NetworkAdapter *);
        void GetMyIP(RakNet::SystemAddress *);
    };
}
