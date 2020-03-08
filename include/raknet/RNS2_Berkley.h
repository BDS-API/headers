#pragma once



using namespace RakNet;

class RNS2_Berkley : RakNet::IRNS2_Berkley {

public:
    virtual void RakNet::RNS2_Berkley::~RNS2_Berkley();
    virtual void SetMulticastInterface(int);

    void SetSocketOptions(void);
    void SetNonBlockingSocket(unsigned long);
    void SetBroadcastSocket(int);
    void GetSystemAddressIPV4And6(int, RakNet::SystemAddress *);
    void SetIPHdrIncl(int);
    void SetDoNotFragment(int);
    void GetSystemAddressIPV4(int, RakNet::SystemAddress *);
    void BindSharedIPV4(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int);
    void BindSharedIPV4And6(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int);
    void RecvFromBlockingIPV4And6(RakNet::RNS2RecvStruct *);
    void RecvFromBlockingIPV4(RakNet::RNS2RecvStruct *);
    void GetSocket(void)const;
    void RecvFromBlocking(RakNet::RNS2RecvStruct *);
    void BindShared(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int);
    void RecvFromLoop(void *);
    void RecvFromLoopInt(void);
    void SignalStopRecvPollingThread(void);
    RNS2_Berkley(void);
    void CreateRecvPollingThread(int);
    void BlockOnStopRecvPollingThread(void);
    void GetBindings(void)const;
};
