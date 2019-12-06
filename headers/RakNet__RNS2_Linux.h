#pragma once

class RakNet::RNS2_Linux : RakNet::RNS2_Berkley, RakNet::RNS2_Windows_Linux_360 {

public:
    virtual ~RNS2_Linux();
    virtual void Send(RakNet::RNS2_SendParameters *, char const*, unsigned int);
    virtual void Bind(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int);

    void GetMyIP(RakNet::SystemAddress *);
    void GetMyAdapters(RakNet::NetworkAdapter *);
    void RNS2_Linux(void);
};
