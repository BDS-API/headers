#pragma once

#include "NetworkAdapter.h"
#include "SystemAddress.h"
#include "RNS2_SendParameters.h"
#include "RNS2_Berkley.h"
#include "RNS2_Windows_Linux_360.h"


namespace RakNet {

    class RNS2_Linux : RakNet::RNS2_Berkley, RakNet::RNS2_Windows_Linux_360 {

    public:
        ~RNS2_Linux();
//      virtual void Bind(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
        virtual void Send(RakNet::RNS2_SendParameters *, char const*, unsigned int);
        void GetMyIP(RakNet::SystemAddress *);
        void GetMyAdapters(RakNet::NetworkAdapter *);
        RNS2_Linux();
    };
}
