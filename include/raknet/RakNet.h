#pragma once

#include "SystemAddress.h"


namespace RakNet {

    static long rakDebugLogCallback;
    static long rak64BitGuidGeneratorOverride;
    static long UNASSIGNED_RAKNET_GUID;
    static long UNASSIGNED_SYSTEM_ADDRESS;

    void UpdateNetworkLoop(void *);
    void _DLMallocMMap(unsigned long);
    void NonNumericHostString(char const*);
    void _RakFree(void *);
    void ConnectionAttemptLoop(void *);
    void _RakFree_Ex(void *, char const*, unsigned int);
    void GetTime();
    void GetTimeUS();
    bool ProcessNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, unsigned long, RakNet::BitStream &);
    void _DLMallocDirectMMap(unsigned long);
    void UpdateTCPInterfaceLoop(void *);
    void _RakMalloc(unsigned long);
    void SplitPacketChannelComp(unsigned short const&, RakNet::SplitPacketChannel const*&);
    void GetTimeMS();
    void GreaterThan(unsigned long, unsigned long);
    void _RakRealloc_Ex(void *, unsigned long, char const*, unsigned int);
    bool ProcessOfflineNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, RakNet::RakNetSocket2 *, bool *, unsigned long);
    void _DLMallocMUnmap(void *, unsigned long);
    bool LessThan(unsigned long, unsigned long);
    void _RakRealloc(void *, unsigned long);
    void _RakMalloc_Ex(unsigned long, char const*, unsigned int);
//  void StrAndBoolComp(char const*&, StrAndBool const&); //TODO: incomplete function definition
    bool ProcessNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, RakNet::RakNetSocket2 *, unsigned long, RakNet::BitStream &);
};
