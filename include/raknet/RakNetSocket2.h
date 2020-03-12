#pragma once

#include "RNS2EventHandler.h"
#include "SystemAddress.h"
#include "NetworkAdapter.h"


namespace RakNet {

    class RakNetSocket2 {

    public:
        virtual void SetMulticastInterface(int);
        ~RakNetSocket2();
        void GetMyAdapters(RakNet::NetworkAdapter *);
//      void SetSocketType(RakNet::RNS2Type); //TODO: incomplete function definition
        void GetSocketType()const;
        void SetUserConnectionSocketIndex(unsigned int);
        void GetUserConnectionSocketIndex()const;
        void SetRecvEventHandler(RakNet::RNS2EventHandler *);
        bool IsBerkleySocket()const;
        void GetMyIP(RakNet::SystemAddress *);
        void DomainNameToIP(char const*, char *);
        RakNetSocket2();
        void GetBoundAddress()const;
        void GetEventHandler()const;
    };
}
