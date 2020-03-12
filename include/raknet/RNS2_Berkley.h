#pragma once

#include "IRNS2_Berkley.h"


namespace RakNet {

    class RNS2_Berkley : RakNet::IRNS2_Berkley {

    public:
        ~RNS2_Berkley();
        virtual void SetMulticastInterface(int);
        RNS2_Berkley();
        void SetIPHdrIncl(int);
        void RecvFromBlockingIPV4And6(RakNet::RNS2RecvStruct *);
        void SetBroadcastSocket(int);
        void SetSocketOptions();
        void GetSystemAddressIPV4And6(int, RakNet::SystemAddress *);
        void GetSocket()const;
        void GetBindings()const;
        void SetDoNotFragment(int);
//      void BindSharedIPV4And6(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
        void RecvFromLoopInt();
        void BlockOnStopRecvPollingThread();
        void RecvFromLoop(void *);
        void CreateRecvPollingThread(int);
        void GetSystemAddressIPV4(int, RakNet::SystemAddress *);
//      void BindSharedIPV4(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
//      void BindShared(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition
        void RecvFromBlocking(RakNet::RNS2RecvStruct *);
        void RecvFromBlockingIPV4(RakNet::RNS2RecvStruct *);
        void SetNonBlockingSocket(unsigned long);
        void SignalStopRecvPollingThread();
    };
}
