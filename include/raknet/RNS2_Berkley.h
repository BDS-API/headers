#pragma once

#include "IRNS2_Berkley.h"


namespace RakNet {

    class RNS2_Berkley : RakNet::IRNS2_Berkley {

    public:
        ~RNS2_Berkley(); // _ZN6RakNet12RNS2_BerkleyD2Ev
        virtual void SetMulticastInterface(int); // _ZN6RakNet12RNS2_Berkley21SetMulticastInterfaceEi
        void SetSocketOptions(); // _ZN6RakNet12RNS2_Berkley16SetSocketOptionsEv
        void SetNonBlockingSocket(unsigned long); // _ZN6RakNet12RNS2_Berkley20SetNonBlockingSocketEm
        void SetBroadcastSocket(int); // _ZN6RakNet12RNS2_Berkley18SetBroadcastSocketEi
        void GetSystemAddressIPV4And6(int, RakNet::SystemAddress *); // _ZN6RakNet12RNS2_Berkley24GetSystemAddressIPV4And6EiPNS_13SystemAddressE
        void SetIPHdrIncl(int); // _ZN6RakNet12RNS2_Berkley12SetIPHdrInclEi
        void SetDoNotFragment(int); // _ZN6RakNet12RNS2_Berkley16SetDoNotFragmentEi
        void GetSystemAddressIPV4(int, RakNet::SystemAddress *); // _ZN6RakNet12RNS2_Berkley20GetSystemAddressIPV4EiPNS_13SystemAddressE
//      void BindSharedIPV4(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition // _ZN6RakNet12RNS2_Berkley14BindSharedIPV4EPNS_26RNS2_BerkleyBindParametersEPKcj
//      void BindSharedIPV4And6(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition // _ZN6RakNet12RNS2_Berkley18BindSharedIPV4And6EPNS_26RNS2_BerkleyBindParametersEPKcj
        void RecvFromBlockingIPV4And6(RakNet::RNS2RecvStruct *); // _ZN6RakNet12RNS2_Berkley24RecvFromBlockingIPV4And6EPNS_14RNS2RecvStructE
        void RecvFromBlockingIPV4(RakNet::RNS2RecvStruct *); // _ZN6RakNet12RNS2_Berkley20RecvFromBlockingIPV4EPNS_14RNS2RecvStructE
        void GetSocket()const; // _ZNK6RakNet12RNS2_Berkley9GetSocketEv
        void RecvFromBlocking(RakNet::RNS2RecvStruct *); // _ZN6RakNet12RNS2_Berkley16RecvFromBlockingEPNS_14RNS2RecvStructE
//      void BindShared(RakNet::RNS2_BerkleyBindParameters *, char const*, unsigned int); //TODO: incomplete function definition // _ZN6RakNet12RNS2_Berkley10BindSharedEPNS_26RNS2_BerkleyBindParametersEPKcj
        void RecvFromLoop(void *); // _ZN6RakNet12RNS2_Berkley12RecvFromLoopEPv
        void RecvFromLoopInt(); // _ZN6RakNet12RNS2_Berkley15RecvFromLoopIntEv
        void SignalStopRecvPollingThread(); // _ZN6RakNet12RNS2_Berkley27SignalStopRecvPollingThreadEv
        RNS2_Berkley(); // _ZN6RakNet12RNS2_BerkleyC2Ev
        void CreateRecvPollingThread(int); // _ZN6RakNet12RNS2_Berkley23CreateRecvPollingThreadEi
        void BlockOnStopRecvPollingThread(); // _ZN6RakNet12RNS2_Berkley28BlockOnStopRecvPollingThreadEv
        void GetBindings()const; // _ZNK6RakNet12RNS2_Berkley11GetBindingsEv
    };
}
