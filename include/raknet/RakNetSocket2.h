#pragma once

using namespace RakNet;

class RakNetSocket2 {

public:
    virtual void RakNet::RakNetSocket2::~RakNetSocket2();
    virtual void SetMulticastInterface(int);

    RakNetSocket2(void);
    void SetRecvEventHandler(RakNet::RNS2EventHandler *);
    void GetSocketType(void)const;
    void SetSocketType(RakNet::RNS2Type);
    void IsBerkleySocket(void)const;
    void GetBoundAddress(void)const;
    void GetMyIP(RakNet::SystemAddress *);
    void GetMyAdapters(RakNet::NetworkAdapter *);
    void GetUserConnectionSocketIndex(void)const;
    void SetUserConnectionSocketIndex(unsigned int);
    void GetEventHandler(void)const;
    void DomainNameToIP(char const*, char *);
};
