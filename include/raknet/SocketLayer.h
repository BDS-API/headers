#pragma once

#include "RakString.h"


namespace RakNet {

    namespace SocketLayer {

        void GetSubNetForSocketAndIp(RakNet::RakString);
        void GetSystemAddress(int, RakNet::SystemAddress *);
        void SetSocketOptions(int, bool, bool);
        void GetMyAdapters(RakNet::NetworkAdapter *);
        void GetMyIP(RakNet::SystemAddress *);
        void GetLocalPort(int);
        void GetFirstBindableIP(char *, int);
        void GetSystemAddress_Old(int, RakNet::SystemAddress *);
    };
}
