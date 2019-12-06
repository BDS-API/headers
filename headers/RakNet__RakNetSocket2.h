#pragma once

class RakNet::RakNetSocket2 {

public:
    virtual ~RakNetSocket2();
    virtual void SetMulticastInterface(int);

    void RakNetSocket2(void);
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
