#pragma once

#include "../raknet/SplitPacketChannel.h"
#include "../raknet/RakNetSocket2.h"
#include "../raknet/BitStream.h"
#include "../raknet/RakPeer.h"
#include "../raknet/SystemAddress.h"


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
    bool LessThan(unsigned long, unsigned long);
    void _RakMalloc(unsigned long);
//  void _RakRealloc(void *, unsigned long); //TODO: incomplete function definition
//  void _RakFree(void *); //TODO: incomplete function definition
    void _RakMalloc_Ex(unsigned long, char const*, unsigned int);
//  void _RakRealloc_Ex(void *, unsigned long, char const*, unsigned int); //TODO: incomplete function definition
//  void _RakFree_Ex(void *, char const*, unsigned int); //TODO: incomplete function definition
    void _DLMallocMMap(unsigned long);
    void _DLMallocDirectMMap(unsigned long);
//  void _DLMallocMUnmap(void *, unsigned long); //TODO: incomplete function definition
    void NonNumericHostString(char const*);
//  void UpdateNetworkLoop(void *); //TODO: incomplete function definition
    bool ProcessOfflineNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, RakNet::RakNetSocket2 *, bool *, unsigned long);
    bool ProcessNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, unsigned long, RakNet::BitStream &);
    bool ProcessNetworkPacket(RakNet::SystemAddress, char const*, int, RakNet::RakPeer *, RakNet::RakNetSocket2 *, unsigned long, RakNet::BitStream &);
    void SplitPacketChannelComp(unsigned short const&, RakNet::SplitPacketChannel const*&);
//  void StrAndBoolComp(char const*&, StrAndBool const&); //TODO: incomplete function definition
//  void UpdateTCPInterfaceLoop(void *); //TODO: incomplete function definition
//  void ConnectionAttemptLoop(void *); //TODO: incomplete function definition
};
