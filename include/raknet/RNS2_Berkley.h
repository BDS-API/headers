#pragma once

#include "SystemAddress.h"
#include "IRNS2_Berkley.h"
#include "RNS2RecvStruct.h"


namespace RakNet {

    class RNS2_Berkley : RakNet::IRNS2_Berkley {

    public:
        ~RNS2_Berkley();
        virtual void SetMulticastInterface(int);
        void CreateRecvPollingThread(int);
        void RecvFromBlockingIPV4And6(RakNet::RNS2RecvStruct *);
//      void BindShared(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
        void RecvFromLoop(void *);
        void GetSocket()const;
        void SetSocketOptions();
//      void BindSharedIPV4(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
        void BlockOnStopRecvPollingThread();
        void SetDoNotFragment(int);
        void RecvFromLoopInt();
        void SetIPHdrIncl(int);
//      void BindSharedIPV4And6(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
        RNS2_Berkley();
        void SetNonBlockingSocket(unsigned long);
        void GetSystemAddressIPV4(int, RakNet::SystemAddress *);
        void SignalStopRecvPollingThread();
        void GetSystemAddressIPV4And6(int, RakNet::SystemAddress *);
        void RecvFromBlockingIPV4(RakNet::RNS2RecvStruct *);
        void SetBroadcastSocket(int);
        void GetBindings()const;
        void RecvFromBlocking(RakNet::RNS2RecvStruct *);
    };
}
