#pragma once

class RakNet::RNS2_Berkley : RakNet::IRNS2_Berkley {

    virtual ~RNS2_Berkley();
    virtual ~RNS2_Berkley();
    virtual void Send(RakNet::RNS2_SendParameters *, char const*, unsigned int);
    virtual void SetMulticastInterface(int);
    virtual void Bind(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int);
}
