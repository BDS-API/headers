#pragma once

#include "PluginInterface2.h"
#include "uint24_t.h"
#include "SystemAddress.h"
#include "BitStream.h"
#include "RakNetRandom.h"
#include "InternalPacket.h"
#include "RakNetSocket2.h"
#include "SplitPacketChannel.h"


namespace RakNet {

    class ReliabilityLayer {

    public:
        class DatagramHistoryNode;
        class UnreliableWithAckReceiptNode;

        ReliabilityLayer();
        void AddFirstToDatagramHistory(RakNet::uint24_t, unsigned long);
        void ApplyNetworkSimulator(double, unsigned int, unsigned int);
        bool IsDeadConnection()const;
        void GetMaxMessageHeaderLengthBits();
        void KillConnection();
        void GetTimeBetweenPackets()const;
        void MoveToListHead(RakNet::InternalPacket *);
        void SetUnreliableTimeout(unsigned int);
        void AreAcksWaiting();
        void GetMaxDatagramSizeExcludingMessageHeaderBits();
        void AddFirstToDatagramHistory(RakNet::uint24_t, RakNet::uint24_t, unsigned long);
        void PushDatagram();
        void SetTimeoutTime(unsigned int);
        bool IsOlderOrderedPacket(RakNet::uint24_t, RakNet::uint24_t);
        void BuildPacketFromSplitPacketList(unsigned short, unsigned long, RakNet::RakNetSocket2 *, RakNet::SystemAddress &, RakNet::RakNetRandom *, RakNet::BitStream &);
//      void AllocInternalPacketData(RakNet::InternalPacket *, RakNet::InternalPacketRefCountedData **, unsigned char *, unsigned char *); //TODO: incomplete function definition
        void RemoveFromUnreliableLinkedList(RakNet::InternalPacket *);
        void ClearPacketsAndDatagrams();
        void AllocInternalPacketData(RakNet::InternalPacket *, unsigned char *);
        void SetSplitMessageProgressInterval(int);
        bool IsResendQueueEmpty()const;
        void TagMostRecentPushAsSecondOfPacketPair();
        void FreeInternalPacketData(RakNet::InternalPacket *, char const*, unsigned int);
        ~ReliabilityLayer();
        void SplitPacket(RakNet::InternalPacket *);
        void InitializeVariables();
        void SendBitStream(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, RakNet::BitStream *, RakNet::RakNetRandom *, unsigned long);
//      void AddSubsequentToDatagramHistory(RakNet::ReliabilityLayer::MessageNumberNode *, RakNet::uint24_t); //TODO: incomplete function definition
        void Reset(bool, int, bool);
//      void Update(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, int, unsigned long, unsigned int, DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::RakNetRandom *, RakNet::BitStream &); //TODO: incomplete function definition
        void ReleaseToInternalPacketPool(RakNet::InternalPacket *);
        void AddToUnreliableLinkedList(RakNet::InternalPacket *);
//      void RemovePacketFromResendListAndDeleteOlderReliableSequenced(RakNet::uint24_t, unsigned long, DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::SystemAddress const&); //TODO: incomplete function definition
        void UpdateWindowFromAck(unsigned long);
        void GetNextSendTime()const;
        void PushPacket(unsigned long, RakNet::InternalPacket *, bool);
        void InitHeapWeights();
        void AddToListTail(RakNet::InternalPacket *, bool);
        void CheckSHA1(char *, unsigned char *, unsigned int);
        void RemoveFromDatagramHistory(RakNet::uint24_t);
        void InsertPacketIntoResendList(RakNet::InternalPacket *, unsigned long, bool, bool);
        void ValidateResendList()const;
        void RemoveFromList(RakNet::InternalPacket *, bool);
        void PopListHead(bool);
        void BuildPacketFromSplitPacketList(RakNet::SplitPacketChannel *, unsigned long);
        void SendAcknowledgementPacket(RakNet::uint24_t, unsigned long);
        void WriteToBitStreamFromInternalPacket(RakNet::BitStream *, RakNet::InternalPacket const*, unsigned long);
        void GetResendListDataSize()const;
        void FreeThreadSafeMemory();
        void UpdateWindowFromPacketloss(unsigned long);
        void Receive(unsigned char **);
//      void Send(char *, unsigned int, PacketPriority, PacketReliability, unsigned char, bool, int, unsigned long, unsigned int); //TODO: incomplete function definition
        void AllocInternalPacketData(RakNet::InternalPacket *, unsigned int, bool, char const*, unsigned int);
        void ResetPacketsAndDatagrams();
        void InsertIntoSplitPacketList(RakNet::InternalPacket *, unsigned long);
        void SendACKs(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, unsigned long, RakNet::RakNetRandom *, RakNet::BitStream &);
        void GetNextWeight(int);
        void GetMaxDatagramSizeExcludingMessageHeaderBytes();
        void GetMessageHeaderLengthBits(RakNet::InternalPacket const*);
        void CreateInternalPacketCopy(RakNet::InternalPacket *, int, int, unsigned long);
//      void GetStatistics(RakNet::RakNetStatistics *); //TODO: incomplete function definition
        void AckTimeout(unsigned long);
        void CreateInternalPacketFromBitStream(RakNet::BitStream *, unsigned long);
//      void HandleSocketReceiveFromConnectedPlayer(char const*, unsigned int, RakNet::SystemAddress &, DataStructures::List<RakNet::PluginInterface2 *> &, int, RakNet::RakNetSocket2 *, RakNet::RakNetRandom *, unsigned long, RakNet::BitStream &); //TODO: incomplete function definition
        void GetTimeoutTime();
        void GetMessageNumberNodeByDatagramIndex(RakNet::uint24_t, unsigned long *);
        bool IsOutgoingDataWaiting();
        void AllocateFromInternalPacketPool();
        bool IsSendThrottled(int);
        void GetSHA1(unsigned char *, unsigned int, char *);
        void FreeMemory(bool);
        void ResendBufferOverflow()const;
        class DatagramHistoryNode {

        public:
//          DatagramHistoryNode(RakNet::ReliabilityLayer::MessageNumberNode *, unsigned long); //TODO: incomplete function definition
            DatagramHistoryNode();
        };
        class UnreliableWithAckReceiptNode {

        public:
            UnreliableWithAckReceiptNode(RakNet::uint24_t, unsigned int, unsigned long);
            UnreliableWithAckReceiptNode();
        };
    };
}
