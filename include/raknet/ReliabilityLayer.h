#pragma once

#include "uint24_t.h"


namespace RakNet {

    class ReliabilityLayer {

    public:
        class DatagramHistoryNode;
        class UnreliableWithAckReceiptNode;

        void AllocInternalPacketData(RakNet::InternalPacket *, unsigned char *);
//      void AllocInternalPacketData(RakNet::InternalPacket *, RakNet::InternalPacketRefCountedData **, unsigned char *, unsigned char *); //TODO: incomplete function definition
        void SplitPacket(RakNet::InternalPacket *);
        void GetResendListDataSize()const;
        void GetTimeoutTime();
        void CreateInternalPacketCopy(RakNet::InternalPacket *, int, int, unsigned long);
        bool IsOlderOrderedPacket(RakNet::uint24_t, RakNet::uint24_t);
        void AreAcksWaiting();
        void AckTimeout(unsigned long);
        void SendAcknowledgementPacket(RakNet::uint24_t, unsigned long);
//      void HandleSocketReceiveFromConnectedPlayer(char const*, unsigned int, RakNet::SystemAddress &, DataStructures::List<RakNet::PluginInterface2 *> &, int, RakNet::RakNetSocket2 *, RakNet::RakNetRandom *, unsigned long, RakNet::BitStream &); //TODO: incomplete function definition
//      void Send(char *, unsigned int, PacketPriority, PacketReliability, unsigned char, bool, int, unsigned long, unsigned int); //TODO: incomplete function definition
        void FreeThreadSafeMemory();
        void InsertIntoSplitPacketList(RakNet::InternalPacket *, unsigned long);
        void CheckSHA1(char *, unsigned char *, unsigned int);
        void SetUnreliableTimeout(unsigned int);
        void BuildPacketFromSplitPacketList(RakNet::SplitPacketChannel *, unsigned long);
        void AddToUnreliableLinkedList(RakNet::InternalPacket *);
        void SetTimeoutTime(unsigned int);
        void AllocateFromInternalPacketPool();
        void UpdateWindowFromAck(unsigned long);
        void Receive(unsigned char **);
        void RemoveFromUnreliableLinkedList(RakNet::InternalPacket *);
        void ValidateResendList()const;
        void GetSHA1(unsigned char *, unsigned int, char *);
        void AllocInternalPacketData(RakNet::InternalPacket *, unsigned int, bool, char const*, unsigned int);
        void InitializeVariables();
        void GetMessageNumberNodeByDatagramIndex(RakNet::uint24_t, unsigned long *);
        void InsertPacketIntoResendList(RakNet::InternalPacket *, unsigned long, bool, bool);
        void SendACKs(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, unsigned long, RakNet::RakNetRandom *, RakNet::BitStream &);
        void UpdateWindowFromPacketloss(unsigned long);
        void PopListHead(bool);
//      void AddSubsequentToDatagramHistory(RakNet::ReliabilityLayer::MessageNumberNode *, RakNet::uint24_t); //TODO: incomplete function definition
        void MoveToListHead(RakNet::InternalPacket *);
        void AddFirstToDatagramHistory(RakNet::uint24_t, unsigned long);
        void RemoveFromDatagramHistory(RakNet::uint24_t);
        void WriteToBitStreamFromInternalPacket(RakNet::BitStream *, RakNet::InternalPacket const*, unsigned long);
        void SetSplitMessageProgressInterval(int);
        bool IsSendThrottled(int);
        void AddToListTail(RakNet::InternalPacket *, bool);
        void GetMaxMessageHeaderLengthBits();
        void InitHeapWeights();
        void CreateInternalPacketFromBitStream(RakNet::BitStream *, unsigned long);
        bool IsResendQueueEmpty()const;
        void PushDatagram();
        void GetMaxDatagramSizeExcludingMessageHeaderBits();
        bool IsOutgoingDataWaiting();
        void RemoveFromList(RakNet::InternalPacket *, bool);
//      void Update(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, int, unsigned long, unsigned int, DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::RakNetRandom *, RakNet::BitStream &); //TODO: incomplete function definition
        void KillConnection();
//      void GetStatistics(RakNet::RakNetStatistics *); //TODO: incomplete function definition
        void BuildPacketFromSplitPacketList(unsigned short, unsigned long, RakNet::RakNetSocket2 *, RakNet::SystemAddress &, RakNet::RakNetRandom *, RakNet::BitStream &);
        void AddFirstToDatagramHistory(RakNet::uint24_t, RakNet::uint24_t, unsigned long);
        void FreeMemory(bool);
        void ResetPacketsAndDatagrams();
        void ReleaseToInternalPacketPool(RakNet::InternalPacket *);
        ~ReliabilityLayer();
        void ClearPacketsAndDatagrams();
//      void RemovePacketFromResendListAndDeleteOlderReliableSequenced(RakNet::uint24_t, unsigned long, DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::SystemAddress const&); //TODO: incomplete function definition
        void Reset(bool, int, bool);
        void GetTimeBetweenPackets()const;
        void TagMostRecentPushAsSecondOfPacketPair();
        void GetMaxDatagramSizeExcludingMessageHeaderBytes();
        void GetNextWeight(int);
        bool IsDeadConnection()const;
        ReliabilityLayer();
        void SendBitStream(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, RakNet::BitStream *, RakNet::RakNetRandom *, unsigned long);
        void ResendBufferOverflow()const;
        void ApplyNetworkSimulator(double, unsigned int, unsigned int);
        void PushPacket(unsigned long, RakNet::InternalPacket *, bool);
        void GetNextSendTime()const;
        void FreeInternalPacketData(RakNet::InternalPacket *, char const*, unsigned int);
        void GetMessageHeaderLengthBits(RakNet::InternalPacket const*);
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
