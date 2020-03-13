#pragma once

#include "uint24_t.h"


namespace RakNet {

    class ReliabilityLayer {

    public:
        class DatagramHistoryNode;
        class UnreliableWithAckReceiptNode;

        ReliabilityLayer(); // _ZN6RakNet16ReliabilityLayerC2Ev
        void InitializeVariables(); // _ZN6RakNet16ReliabilityLayer19InitializeVariablesEv
        ~ReliabilityLayer(); // _ZN6RakNet16ReliabilityLayerD2Ev
        void FreeMemory(bool); // _ZN6RakNet16ReliabilityLayer10FreeMemoryEb
        void Reset(bool, int, bool); // _ZN6RakNet16ReliabilityLayer5ResetEbib
        void SetTimeoutTime(unsigned int); // _ZN6RakNet16ReliabilityLayer14SetTimeoutTimeEj
        void GetTimeoutTime(); // _ZN6RakNet16ReliabilityLayer14GetTimeoutTimeEv
        void InitHeapWeights(); // _ZN6RakNet16ReliabilityLayer15InitHeapWeightsEv
        void FreeThreadSafeMemory(); // _ZN6RakNet16ReliabilityLayer20FreeThreadSafeMemoryEv
        void ClearPacketsAndDatagrams(); // _ZN6RakNet16ReliabilityLayer24ClearPacketsAndDatagramsEv
        void FreeInternalPacketData(RakNet::InternalPacket *, char const*, unsigned int); // _ZN6RakNet16ReliabilityLayer22FreeInternalPacketDataEPNS_14InternalPacketEPKcj
        void ReleaseToInternalPacketPool(RakNet::InternalPacket *); // _ZN6RakNet16ReliabilityLayer27ReleaseToInternalPacketPoolEPNS_14InternalPacketE
        void RemoveFromDatagramHistory(RakNet::uint24_t); // _ZN6RakNet16ReliabilityLayer25RemoveFromDatagramHistoryENS_8uint24_tE
//      void HandleSocketReceiveFromConnectedPlayer(char const*, unsigned int, RakNet::SystemAddress &, DataStructures::List<RakNet::PluginInterface2 *> &, int, RakNet::RakNetSocket2 *, RakNet::RakNetRandom *, unsigned long, RakNet::BitStream &); //TODO: incomplete function definition // _ZN6RakNet16ReliabilityLayer38HandleSocketReceiveFromConnectedPlayerEPKcjRNS_13SystemAddressERN14DataStructures4ListIPNS_16PluginInterface2EEEiPNS_13RakNetSocket2EPNS_12RakNetRandomEmRNS_9BitStreamE
        void AllocateFromInternalPacketPool(); // _ZN6RakNet16ReliabilityLayer30AllocateFromInternalPacketPoolEv
        void AllocInternalPacketData(RakNet::InternalPacket *, unsigned int, bool, char const*, unsigned int); // _ZN6RakNet16ReliabilityLayer23AllocInternalPacketDataEPNS_14InternalPacketEjbPKcj
        void GetMessageNumberNodeByDatagramIndex(RakNet::uint24_t, unsigned long *); // _ZN6RakNet16ReliabilityLayer35GetMessageNumberNodeByDatagramIndexENS_8uint24_tEPm
//      void RemovePacketFromResendListAndDeleteOlderReliableSequenced(RakNet::uint24_t, unsigned long, DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::SystemAddress const&); //TODO: incomplete function definition // _ZN6RakNet16ReliabilityLayer57RemovePacketFromResendListAndDeleteOlderReliableSequencedENS_8uint24_tEmRN14DataStructures4ListIPNS_16PluginInterface2EEERKNS_13SystemAddressE
        void SendAcknowledgementPacket(RakNet::uint24_t, unsigned long); // _ZN6RakNet16ReliabilityLayer25SendAcknowledgementPacketENS_8uint24_tEm
        void CreateInternalPacketFromBitStream(RakNet::BitStream *, unsigned long); // _ZN6RakNet16ReliabilityLayer33CreateInternalPacketFromBitStreamEPNS_9BitStreamEm
        void InsertIntoSplitPacketList(RakNet::InternalPacket *, unsigned long); // _ZN6RakNet16ReliabilityLayer25InsertIntoSplitPacketListEPNS_14InternalPacketEm
        void BuildPacketFromSplitPacketList(unsigned short, unsigned long, RakNet::RakNetSocket2 *, RakNet::SystemAddress &, RakNet::RakNetRandom *, RakNet::BitStream &); // _ZN6RakNet16ReliabilityLayer30BuildPacketFromSplitPacketListEtmPNS_13RakNetSocket2ERNS_13SystemAddressEPNS_12RakNetRandomERNS_9BitStreamE
        bool IsOlderOrderedPacket(RakNet::uint24_t, RakNet::uint24_t); // _ZN6RakNet16ReliabilityLayer20IsOlderOrderedPacketENS_8uint24_tES1_
        void Receive(unsigned char **); // _ZN6RakNet16ReliabilityLayer7ReceiveEPPh
//      void Send(char *, unsigned int, PacketPriority, PacketReliability, unsigned char, bool, int, unsigned long, unsigned int); //TODO: incomplete function definition // _ZN6RakNet16ReliabilityLayer4SendEPcj14PacketPriority17PacketReliabilityhbimj
        void AllocInternalPacketData(RakNet::InternalPacket *, unsigned char *); // _ZN6RakNet16ReliabilityLayer23AllocInternalPacketDataEPNS_14InternalPacketEPh
        void GetMaxDatagramSizeExcludingMessageHeaderBytes(); // _ZN6RakNet16ReliabilityLayer45GetMaxDatagramSizeExcludingMessageHeaderBytesEv
        void GetMaxMessageHeaderLengthBits(); // _ZN6RakNet16ReliabilityLayer29GetMaxMessageHeaderLengthBitsEv
        void SplitPacket(RakNet::InternalPacket *); // _ZN6RakNet16ReliabilityLayer11SplitPacketEPNS_14InternalPacketE
        void AddToUnreliableLinkedList(RakNet::InternalPacket *); // _ZN6RakNet16ReliabilityLayer25AddToUnreliableLinkedListEPNS_14InternalPacketE
        void GetNextWeight(int); // _ZN6RakNet16ReliabilityLayer13GetNextWeightEi
//      void Update(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, int, unsigned long, unsigned int, DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::RakNetRandom *, RakNet::BitStream &); //TODO: incomplete function definition // _ZN6RakNet16ReliabilityLayer6UpdateEPNS_13RakNetSocket2ERNS_13SystemAddressEimjRN14DataStructures4ListIPNS_16PluginInterface2EEEPNS_12RakNetRandomERNS_9BitStreamE
        void RemoveFromUnreliableLinkedList(RakNet::InternalPacket *); // _ZN6RakNet16ReliabilityLayer30RemoveFromUnreliableLinkedListEPNS_14InternalPacketE
        void AckTimeout(unsigned long); // _ZN6RakNet16ReliabilityLayer10AckTimeoutEm
        void SendACKs(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, unsigned long, RakNet::RakNetRandom *, RakNet::BitStream &); // _ZN6RakNet16ReliabilityLayer8SendACKsEPNS_13RakNetSocket2ERNS_13SystemAddressEmPNS_12RakNetRandomERNS_9BitStreamE
        void GetMaxDatagramSizeExcludingMessageHeaderBits(); // _ZN6RakNet16ReliabilityLayer44GetMaxDatagramSizeExcludingMessageHeaderBitsEv
        void SendBitStream(RakNet::RakNetSocket2 *, RakNet::SystemAddress &, RakNet::BitStream *, RakNet::RakNetRandom *, unsigned long); // _ZN6RakNet16ReliabilityLayer13SendBitStreamEPNS_13RakNetSocket2ERNS_13SystemAddressEPNS_9BitStreamEPNS_12RakNetRandomEm
        bool IsResendQueueEmpty()const; // _ZNK6RakNet16ReliabilityLayer18IsResendQueueEmptyEv
        void ResetPacketsAndDatagrams(); // _ZN6RakNet16ReliabilityLayer24ResetPacketsAndDatagramsEv
        void PushDatagram(); // _ZN6RakNet16ReliabilityLayer12PushDatagramEv
        void PopListHead(bool); // _ZN6RakNet16ReliabilityLayer11PopListHeadEb
        void PushPacket(unsigned long, RakNet::InternalPacket *, bool); // _ZN6RakNet16ReliabilityLayer10PushPacketEmPNS_14InternalPacketEb
        void InsertPacketIntoResendList(RakNet::InternalPacket *, unsigned long, bool, bool); // _ZN6RakNet16ReliabilityLayer26InsertPacketIntoResendListEPNS_14InternalPacketEmbb
        void ResendBufferOverflow()const; // _ZNK6RakNet16ReliabilityLayer20ResendBufferOverflowEv
        void GetMessageHeaderLengthBits(RakNet::InternalPacket const*); // _ZN6RakNet16ReliabilityLayer26GetMessageHeaderLengthBitsEPKNS_14InternalPacketE
        void AddFirstToDatagramHistory(RakNet::uint24_t, RakNet::uint24_t, unsigned long); // _ZN6RakNet16ReliabilityLayer25AddFirstToDatagramHistoryENS_8uint24_tES1_m
//      void AddSubsequentToDatagramHistory(RakNet::ReliabilityLayer::MessageNumberNode *, RakNet::uint24_t); //TODO: incomplete function definition // _ZN6RakNet16ReliabilityLayer30AddSubsequentToDatagramHistoryEPNS0_17MessageNumberNodeENS_8uint24_tE
        void WriteToBitStreamFromInternalPacket(RakNet::BitStream *, RakNet::InternalPacket const*, unsigned long); // _ZN6RakNet16ReliabilityLayer34WriteToBitStreamFromInternalPacketEPNS_9BitStreamEPKNS_14InternalPacketEm
        void AddFirstToDatagramHistory(RakNet::uint24_t, unsigned long); // _ZN6RakNet16ReliabilityLayer25AddFirstToDatagramHistoryENS_8uint24_tEm
        bool IsOutgoingDataWaiting(); // _ZN6RakNet16ReliabilityLayer21IsOutgoingDataWaitingEv
        void AreAcksWaiting(); // _ZN6RakNet16ReliabilityLayer14AreAcksWaitingEv
        void ApplyNetworkSimulator(double, unsigned int, unsigned int); // _ZN6RakNet16ReliabilityLayer21ApplyNetworkSimulatorEdjj
        void SetSplitMessageProgressInterval(int); // _ZN6RakNet16ReliabilityLayer31SetSplitMessageProgressIntervalEi
        void SetUnreliableTimeout(unsigned int); // _ZN6RakNet16ReliabilityLayer20SetUnreliableTimeoutEj
        bool IsSendThrottled(int); // _ZN6RakNet16ReliabilityLayer15IsSendThrottledEi
        void UpdateWindowFromPacketloss(unsigned long); // _ZN6RakNet16ReliabilityLayer26UpdateWindowFromPacketlossEm
        void UpdateWindowFromAck(unsigned long); // _ZN6RakNet16ReliabilityLayer19UpdateWindowFromAckEm
        void RemoveFromList(RakNet::InternalPacket *, bool); // _ZN6RakNet16ReliabilityLayer14RemoveFromListEPNS_14InternalPacketEb
        void GetSHA1(unsigned char *, unsigned int, char *); // _ZN6RakNet16ReliabilityLayer7GetSHA1EPhjPc
        void CheckSHA1(char *, unsigned char *, unsigned int); // _ZN6RakNet16ReliabilityLayer9CheckSHA1EPcPhj
//      void AllocInternalPacketData(RakNet::InternalPacket *, RakNet::InternalPacketRefCountedData **, unsigned char *, unsigned char *); //TODO: incomplete function definition // _ZN6RakNet16ReliabilityLayer23AllocInternalPacketDataEPNS_14InternalPacketEPPNS_28InternalPacketRefCountedDataEPhS6_
        void BuildPacketFromSplitPacketList(RakNet::SplitPacketChannel *, unsigned long); // _ZN6RakNet16ReliabilityLayer30BuildPacketFromSplitPacketListEPNS_18SplitPacketChannelEm
        void CreateInternalPacketCopy(RakNet::InternalPacket *, int, int, unsigned long); // _ZN6RakNet16ReliabilityLayer24CreateInternalPacketCopyEPNS_14InternalPacketEiim
        void AddToListTail(RakNet::InternalPacket *, bool); // _ZN6RakNet16ReliabilityLayer13AddToListTailEPNS_14InternalPacketEb
        bool IsDeadConnection()const; // _ZNK6RakNet16ReliabilityLayer16IsDeadConnectionEv
        void KillConnection(); // _ZN6RakNet16ReliabilityLayer14KillConnectionEv
//      void GetStatistics(RakNet::RakNetStatistics *); //TODO: incomplete function definition // _ZN6RakNet16ReliabilityLayer13GetStatisticsEPNS_16RakNetStatisticsE
        void GetResendListDataSize()const; // _ZNK6RakNet16ReliabilityLayer21GetResendListDataSizeEv
        void GetNextSendTime()const; // _ZNK6RakNet16ReliabilityLayer15GetNextSendTimeEv
        void GetTimeBetweenPackets()const; // _ZNK6RakNet16ReliabilityLayer21GetTimeBetweenPacketsEv
        void TagMostRecentPushAsSecondOfPacketPair(); // _ZN6RakNet16ReliabilityLayer37TagMostRecentPushAsSecondOfPacketPairEv
        void MoveToListHead(RakNet::InternalPacket *); // _ZN6RakNet16ReliabilityLayer14MoveToListHeadEPNS_14InternalPacketE
        void ValidateResendList()const; // _ZNK6RakNet16ReliabilityLayer18ValidateResendListEv
        class DatagramHistoryNode {

        public:
//          DatagramHistoryNode(RakNet::ReliabilityLayer::MessageNumberNode *, unsigned long); //TODO: incomplete function definition // _ZN6RakNet16ReliabilityLayer19DatagramHistoryNodeC2EPNS0_17MessageNumberNodeEm
            DatagramHistoryNode(); // _ZN6RakNet16ReliabilityLayer19DatagramHistoryNodeC2Ev
        };
        class UnreliableWithAckReceiptNode {

        public:
            UnreliableWithAckReceiptNode(RakNet::uint24_t, unsigned int, unsigned long); // _ZN6RakNet16ReliabilityLayer28UnreliableWithAckReceiptNodeC2ENS_8uint24_tEjm
            UnreliableWithAckReceiptNode(); // _ZN6RakNet16ReliabilityLayer28UnreliableWithAckReceiptNodeC2Ev
        };
    };
}
