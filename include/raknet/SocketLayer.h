#pragma once

#include "SystemAddress.h"
#include "RakString.h"
#include "NetworkAdapter.h"


namespace RakNet {

    namespace SocketLayer {

        void GetMyAdapters(RakNet::NetworkAdapter *);
        void GetLocalPort(int);
        void GetMyIP(RakNet::SystemAddress *);
        void GetSubNetForSocketAndIp(RakNet::RakString);
        void GetSystemAddress_Old(int, RakNet::SystemAddress *);
        void GetSystemAddress(int, RakNet::SystemAddress *);
        void SetSocketOptions(int, bool, bool);
        void GetFirstBindableIP(char *, int);
    };
}
