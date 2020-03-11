#pragma once

#include "./RNS2RecvStruct.h"
#include "./SystemAddress.h"
#include "./IRNS2_Berkley.h"


namespace RakNet {

class RNS2_Berkley : RakNet::IRNS2_Berkley {

public:
    virtual ~RNS2_Berkley();
    virtual void SetMulticastInterface(int);

    void SetSocketOptions();
    void SetNonBlockingSocket(unsigned long);
    void SetBroadcastSocket(int);
    void GetSystemAddressIPV4And6(int, RakNet::SystemAddress *);
    void SetIPHdrIncl(int);
    void SetDoNotFragment(int);
    void GetSystemAddressIPV4(int, RakNet::SystemAddress *);
//  void BindSharedIPV4(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
//  void BindSharedIPV4And6(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
    void RecvFromBlockingIPV4And6(RakNet::RNS2RecvStruct *);
    void RecvFromBlockingIPV4(RakNet::RNS2RecvStruct *);
    void GetSocket()const;
    void RecvFromBlocking(RakNet::RNS2RecvStruct *);
//  void BindShared(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
//  void RecvFromLoop(void *); //TODO: incomplete function definition
    void RecvFromLoopInt();
    void SignalStopRecvPollingThread();
    RNS2_Berkley();
    void CreateRecvPollingThread(int);
    void BlockOnStopRecvPollingThread();
    void GetBindings()const;
};

}