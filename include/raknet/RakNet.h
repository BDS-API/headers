#pragma once

#include "SystemAddress.h"


namespace RakNet {

    static long rakDebugLogCallback;
    static long rak64BitGuidGeneratorOverride;
    static long UNASSIGNED_RAKNET_GUID;
    static long UNASSIGNED_SYSTEM_ADDRESS;

    void GetTime(); // _ZN6RakNet7GetTimeEv
    void GetTimeUS(); // _ZN6RakNet9GetTimeUSEv
    void GetTimeMS(); // _ZN6RakNet9GetTimeMSEv
    void GreaterThan(unsigned long, unsigned long); // _ZN6RakNet11GreaterThanEmm
    bool LessThan(unsigned long, unsigned long); // _ZN6RakNet8LessThanEmm
    void _RakMalloc(unsigned long); // _ZN6RakNet10_RakMallocEm
    void _RakRealloc(void *, unsigned long); // _ZN6RakNet11_RakReallocEPvm
    void _RakFree(void *); // _ZN6RakNet8_RakFreeEPv
    void _RakMalloc_Ex(unsigned long, char const*, unsigned int); // _ZN6RakNet13_RakMalloc_ExEmPKcj
    void _RakRealloc_Ex(void *, unsigned long, char const*, unsigned int); // _ZN6RakNet14_RakRealloc_ExEPvmPKcj
    void _RakFree_Ex(void *, char const*, unsigned int); // _ZN6RakNet11_RakFree_ExEPvPKcj
    void _DLMallocMMap(unsigned long); // _ZN6RakNet13_DLMallocMMapEm
    void _DLMallocDirectMMap(unsigned long); // _ZN6RakNet19_DLMallocDirectMMapEm
    void _DLMallocMUnmap(void *, unsigned long); // _ZN6RakNet15_DLMallocMUnmapEPvm
    void NonNumericHostString(char const*); // _ZN6RakNet20NonNumericHostStringEPKc
    void UpdateNetworkLoop(void *); // _ZN6RakNet17UpdateNetworkLoopEPv
    bool ProcessOfflineNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, RakNet::RakNetSocket2 *, bool *, unsigned long); // _ZN6RakNet27ProcessOfflineNetworkPacketENS_13SystemAddressEPKciPNS_7RakPeerEPNS_13RakNetSocket2EPbm
    bool ProcessNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, unsigned long, RakNet::BitStream &); // _ZN6RakNet20ProcessNetworkPacketENS_13SystemAddressEPKciPNS_7RakPeerEmRNS_9BitStreamE
    bool ProcessNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, RakNet::RakNetSocket2 *, unsigned long, RakNet::BitStream &); // _ZN6RakNet20ProcessNetworkPacketENS_13SystemAddressEPKciPNS_7RakPeerEPNS_13RakNetSocket2EmRNS_9BitStreamE
    void SplitPacketChannelComp(unsigned short const&, RakNet::SplitPacketChannel const*&); // _ZN6RakNet22SplitPacketChannelCompERKtRKPNS_18SplitPacketChannelE
//  void StrAndBoolComp(char const*&, StrAndBool const&); //TODO: incomplete function definition // _ZN6RakNet14StrAndBoolCompERKPcRK10StrAndBool
    void UpdateTCPInterfaceLoop(void *); // _ZN6RakNet22UpdateTCPInterfaceLoopEPv
    void ConnectionAttemptLoop(void *); // _ZN6RakNet21ConnectionAttemptLoopEPv
};
