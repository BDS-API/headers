#pragma once

#include "./SystemAddress.h"
#include "./RakNetRandom.h"
#include "./SplitPacketChannel.h"
#include "./PluginInterface2.h"
#include "./RakNetSocket2.h"
#include "./InternalPacket.h"
#include "./BitStream.h"
#include "./uint24_t.h"


namespace RakNet {

class ReliabilityLayer {

public:

    ReliabilityLayer();
    void InitializeVariables();
    ~ReliabilityLayer();
    void FreeMemory(bool);
    void Reset(bool, int, bool);
    void SetTimeoutTime(unsigned int);
    void GetTimeoutTime();
    void InitHeapWeights();
    void FreeThreadSafeMemory();
    void ClearPacketsAndDatagrams();
    void FreeInternalPacketData(RakNet::InternalPacket *, char const*, unsigned int);
    void ReleaseToInternalPacketPool(RakNet::InternalPacket *);
    void RemoveFromDatagramHistory(RakNet::uint24_t);
//  void HandleSocketReceiveFromConnectedPlayer(char const*, unsigned int, RakNet::SystemAddress &, DataStructures::List<RakNet::PluginInterface2 *> &, int, RakNet::RakNetSocket2 *, RakNet::RakNetRandom *, unsigned long, RakNet::BitStream &); //TODO: incomplete function definition
    void AllocateFromInternalPacketPool();
    void AllocInternalPacketData(RakNet::InternalPacket *, unsigned int, bool, char const*, unsigned int);
    void GetMessageNumberNodeByDatagramIndex(RakNet::uint24_t, unsigned long *);
//  void RemovePacketFromResendListAndDeleteOlderReliableSequenced(RakNet::uint24_t, unsigned long, DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::SystemAddress const&); //TODO: incomplete function definition
    void SendAcknowledgementPacket(RakNet::uint24_t, unsigned long);
    void CreateInternalPacketFromBitStream(RakNet::BitStream *, unsigned long);
    void InsertIntoSplitPacketList(RakNet::InternalPacket *, unsigned long);
    void BuildPacketFromSplitPacketList(unsigned short, unsigned long, RakNet::RakNetSocket2 *, RakNet::SystemAddress &, RakNet::RakNetRandom *, RakNet::BitStream &);
    bool IsOlderOrderedPacket(RakNet::uint24_t, RakNet::uint24_t);
    void Receive(unsigned char **);
//  void Send(char *, unsigned int, PacketPriority, PacketReliability, unsigned char, bool, int, unsigned long, unsigned int); //TODO: incomplete function definition
    void AllocInternalPacketData(RakNet::InternalPacket *, unsigned char *);
    void GetMaxDatagramSizeExcludingMessageHeaderBytes();
    void GetMaxMessageHeaderLengthBits();
    void SplitPacket(RakNet::InternalPacket *);
    void AddToUnreliableLinkedList(RakNet::InternalPacket *);
    void GetNextWeight(int);
//  void Update(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, int, unsigned long, unsigned int, DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::RakNetRandom *, RakNet::BitStream &); //TODO: incomplete function definition
    void RemoveFromUnreliableLinkedList(RakNet::InternalPacket *);
    void AckTimeout(unsigned long);
    void SendACKs(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, unsigned long, RakNet::RakNetRandom *, RakNet::BitStream &);
    void GetMaxDatagramSizeExcludingMessageHeaderBits();
    void SendBitStream(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, RakNet::BitStream *, RakNet::RakNetRandom *, unsigned long);
    bool IsResendQueueEmpty()const;
    void ResetPacketsAndDatagrams();
    void PushDatagram();
    void PopListHead(bool);
    void PushPacket(unsigned long, RakNet::InternalPacket *, bool);
    void InsertPacketIntoResendList(RakNet::InternalPacket *, unsigned long, bool, bool);
    void ResendBufferOverflow()const;
    void GetMessageHeaderLengthBits(RakNet::InternalPacket const*);
    void AddFirstToDatagramHistory(RakNet::uint24_t, RakNet::uint24_t, unsigned long);
//  void AddSubsequentToDatagramHistory(RakNet::ReliabilityLayer::MessageNumberNode *, RakNet::uint24_t); //TODO: incomplete function definition
    void WriteToBitStreamFromInternalPacket(RakNet::BitStream *, RakNet::InternalPacket const*, unsigned long);
    void AddFirstToDatagramHistory(RakNet::uint24_t, unsigned long);
    bool IsOutgoingDataWaiting();
    void AreAcksWaiting();
    void ApplyNetworkSimulator(double, unsigned int, unsigned int);
    void SetSplitMessageProgressInterval(int);
    void SetUnreliableTimeout(unsigned int);
    bool IsSendThrottled(int);
    void UpdateWindowFromPacketloss(unsigned long);
    void UpdateWindowFromAck(unsigned long);
    void RemoveFromList(RakNet::InternalPacket *, bool);
    void GetSHA1(unsigned char *, unsigned int, char *);
    void CheckSHA1(char *, unsigned char *, unsigned int);
//  void AllocInternalPacketData(RakNet::InternalPacket *, RakNet::InternalPacketRefCountedData **, unsigned char *, unsigned char *); //TODO: incomplete function definition
    void BuildPacketFromSplitPacketList(RakNet::SplitPacketChannel *, unsigned long);
    void CreateInternalPacketCopy(RakNet::InternalPacket *, int, int, unsigned long);
    void AddToListTail(RakNet::InternalPacket *, bool);
    bool IsDeadConnection()const;
    void KillConnection();
//  void GetStatistics(RakNet::RakNetStatistics *); //TODO: incomplete function definition
    void GetResendListDataSize()const;
    void GetNextSendTime()const;
    void GetTimeBetweenPackets()const;
    void TagMostRecentPushAsSecondOfPacketPair();
    void MoveToListHead(RakNet::InternalPacket *);
    void ValidateResendList()const;
};

}