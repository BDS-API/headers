#pragma once

#include "RakString.h"


namespace RakNet {

    namespace SocketLayer {

        void SetSocketOptions(int, bool, bool); // _ZN6RakNet11SocketLayer16SetSocketOptionsEibb
        void GetSubNetForSocketAndIp(RakNet::RakString); // _ZN6RakNet11SocketLayer23GetSubNetForSocketAndIpENS_9RakStringE
        void GetMyAdapters(RakNet::NetworkAdapter *); // _ZN6RakNet11SocketLayer13GetMyAdaptersEPNS_14NetworkAdapterE
        void GetMyIP(RakNet::SystemAddress *); // _ZN6RakNet11SocketLayer7GetMyIPEPNS_13SystemAddressE
        void GetLocalPort(int); // _ZN6RakNet11SocketLayer12GetLocalPortEi
        void GetSystemAddress(int, RakNet::SystemAddress *); // _ZN6RakNet11SocketLayer16GetSystemAddressEiPNS_13SystemAddressE
        void GetSystemAddress_Old(int, RakNet::SystemAddress *); // _ZN6RakNet11SocketLayer20GetSystemAddress_OldEiPNS_13SystemAddressE
        void GetFirstBindableIP(char *, int); // _ZN6RakNet11SocketLayer18GetFirstBindableIPEPci
    };
}
