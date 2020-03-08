#pragma once



using namespace RakNet;

class RakNetSocket2 {

public:
    virtual RakNet::RakNetSocket2::~RakNetSocket2()
    virtual void SetMulticastInterface(int);

    RakNetSocket2(void);
    void SetRecvEventHandler(RakNet::RNS2EventHandler *);
    void GetSocketType()const;
    void SetSocketType(RakNet::RNS2Type);
    void IsBerkleySocket()const;
    void GetBoundAddress()const;
    void GetMyIP(RakNet::SystemAddress *);
    void GetMyAdapters(RakNet::NetworkAdapter *);
    void GetUserConnectionSocketIndex()const;
    void SetUserConnectionSocketIndex(unsigned int);
    void GetEventHandler()const;
    void DomainNameToIP(char const*, char *);
};
