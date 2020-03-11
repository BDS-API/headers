#pragma once

#include "./RNS2EventHandler.h"
#include "./SystemAddress.h"
#include "./NetworkAdapter.h"


namespace RakNet {

class RakNetSocket2 {

public:
    virtual ~RakNetSocket2();
    virtual void SetMulticastInterface(int);

    RakNetSocket2();
    void SetRecvEventHandler(RakNet::RNS2EventHandler *);
    void GetSocketType()const;
//  void SetSocketType(RakNet::RNS2Type); //TODO: incomplete function definition
    bool IsBerkleySocket()const;
    void GetBoundAddress()const;
    void GetMyIP(RakNet::SystemAddress *);
    void GetMyAdapters(RakNet::NetworkAdapter *);
    void GetUserConnectionSocketIndex()const;
    void SetUserConnectionSocketIndex(unsigned int);
    void GetEventHandler()const;
    void DomainNameToIP(char const*, char *);
};

}