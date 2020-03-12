#pragma once

#include "RakPeer.h"
#include "SystemAddress.h"
#include "BitStream.h"
#include "RakNetSocket2.h"
#include "SplitPacketChannel.h"


namespace RakNet {

    static long rakDebugLogCallback;
    static long rak64BitGuidGeneratorOverride;
    static long UNASSIGNED_RAKNET_GUID;
    static long UNASSIGNED_SYSTEM_ADDRESS;

    void _RakMalloc(unsigned long);
    void GetTimeUS();
    void GreaterThan(unsigned long, unsigned long);
    void NonNumericHostString(char const*);
    void _DLMallocMUnmap(void *, unsigned long);
    void _RakRealloc(void *, unsigned long);
    void _RakRealloc_Ex(void *, unsigned long, char const*, unsigned int);
    void GetTime();
    void UpdateTCPInterfaceLoop(void *);
    void UpdateNetworkLoop(void *);
    bool ProcessOfflineNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, RakNet::RakNetSocket2 *, bool *, unsigned long);
    bool ProcessNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, unsigned long, RakNet::BitStream &);
    void _RakFree(void *);
    void _DLMallocMMap(unsigned long);
    bool ProcessNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, RakNet::RakNetSocket2 *, unsigned long, RakNet::BitStream &);
    void _DLMallocDirectMMap(unsigned long);
//  void StrAndBoolComp(char const*&, StrAndBool const&); //TODO: incomplete function definition
    bool LessThan(unsigned long, unsigned long);
    void _RakMalloc_Ex(unsigned long, char const*, unsigned int);
    void ConnectionAttemptLoop(void *);
    void _RakFree_Ex(void *, char const*, unsigned int);
    void GetTimeMS();
    void SplitPacketChannelComp(unsigned short const&, RakNet::SplitPacketChannel const*&);
};
