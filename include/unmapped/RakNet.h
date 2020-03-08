#pragma once

#include "../raknet/RakPeer"
#include "../raknet/RakNetSocket2"
#include "../raknet/SplitPacketChannel"
#include "../raknet/BitStream"
#include "../raknet/SystemAddress"


class RakNet {

public:
    static long rakDebugLogCallback;
    static long rak64BitGuidGeneratorOverride;
    static long UNASSIGNED_RAKNET_GUID;
    static long UNASSIGNED_SYSTEM_ADDRESS;


    void GetTime();
    void GetTimeUS();
    void GetTimeMS();
    void GreaterThan(unsigned long, unsigned long);
    void LessThan(unsigned long, unsigned long);
    void _RakMalloc(unsigned long);
    void _RakRealloc(void *, unsigned long);
    void _RakFree(void *);
    void _RakMalloc_Ex(unsigned long, char const*, unsigned int);
    void _RakRealloc_Ex(void *, unsigned long, char const*, unsigned int);
    void _RakFree_Ex(void *, char const*, unsigned int);
    void _DLMallocMMap(unsigned long);
    void _DLMallocDirectMMap(unsigned long);
    void _DLMallocMUnmap(void *, unsigned long);
    void NonNumericHostString(char const*);
    void UpdateNetworkLoop(void *);
    void ProcessOfflineNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, RakNet::RakNetSocket2 *, bool *, unsigned long);
    void ProcessNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, unsigned long, RakNet::BitStream &);
    void ProcessNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, RakNet::RakNetSocket2 *, unsigned long, RakNet::BitStream &);
    void SplitPacketChannelComp(unsigned short const&, RakNet::SplitPacketChannel const*&);
    void StrAndBoolComp(char const*&, StrAndBool const&);
    void UpdateTCPInterfaceLoop(void *);
    void ConnectionAttemptLoop(void *);
};
