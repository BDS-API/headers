#pragma once

#include "RNS2_Windows_Linux_360.h"
#include "RNS2_Berkley.h"


namespace RakNet {

    class RNS2_Linux : public RakNet::RNS2_Berkley, public RakNet::RNS2_Windows_Linux_360 {

    public:
        virtual ~RNS2_Linux(); // _ZN6RakNet10RNS2_LinuxD2Ev
        virtual void __fake_function0(); // fake
        virtual void Send(RakNet::RNS2_SendParameters *, char const*, unsigned int); // _ZN6RakNet10RNS2_Linux4SendEPNS_19RNS2_SendParametersEPKcj
        virtual void Bind__incomplete0(long *, char const*, unsigned int); //TODO: incomplete function definition // _ZN6RakNet10RNS2_Linux4BindEPNS_26RNS2_BerkleyBindParametersEPKcj
        void GetMyIP(RakNet::SystemAddress *); // _ZN6RakNet10RNS2_Linux7GetMyIPEPNS_13SystemAddressE
        void GetMyAdapters(RakNet::NetworkAdapter *); // _ZN6RakNet10RNS2_Linux13GetMyAdaptersEPNS_14NetworkAdapterE
        RNS2_Linux(); // _ZN6RakNet10RNS2_LinuxC2Ev
    };
}
