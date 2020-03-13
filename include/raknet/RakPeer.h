#pragma once

#include "AddressOrGUID.h"
#include "RakNetGUID.h"
#include "RakPeerInterface.h"
#include "RNS2EventHandler.h"
#include "SystemAddress.h"


namespace RakNet {

    class RakPeer : RakNet::RakPeerInterface, RakNet::RNS2EventHandler {

    public:
        class BufferedCommandStruct;
        class RemoteSystemStruct;
        class RequestedConnectionStruct;
        class SocketQueryOutput;

        ~RakPeer(); // _ZN6RakNet7RakPeerD2Ev
        virtual void Startup(unsigned int, RakNet::SocketDescriptor *, unsigned int, int); // _ZN6RakNet7RakPeer7StartupEjPNS_16SocketDescriptorEji
        virtual void InitializeSecurity(char const*, char const*, bool); // _ZN6RakNet7RakPeer18InitializeSecurityEPKcS2_b
        virtual void DisableSecurity(); // _ZN6RakNet7RakPeer15DisableSecurityEv
        virtual void AddToSecurityExceptionList(char const*); // _ZN6RakNet7RakPeer26AddToSecurityExceptionListEPKc
        virtual void RemoveFromSecurityExceptionList(char const*); // _ZN6RakNet7RakPeer31RemoveFromSecurityExceptionListEPKc
        virtual bool IsInSecurityExceptionList(char const*); // _ZN6RakNet7RakPeer25IsInSecurityExceptionListEPKc
        virtual void SetMaximumIncomingConnections(unsigned short); // _ZN6RakNet7RakPeer29SetMaximumIncomingConnectionsEt
        virtual void GetMaximumIncomingConnections()const; // _ZNK6RakNet7RakPeer29GetMaximumIncomingConnectionsEv
        virtual void NumberOfConnections()const; // _ZNK6RakNet7RakPeer19NumberOfConnectionsEv
        virtual void SetIncomingPassword(char const*, int); // _ZN6RakNet7RakPeer19SetIncomingPasswordEPKci
        virtual void GetIncomingPassword(char *, int *); // _ZN6RakNet7RakPeer19GetIncomingPasswordEPcPi
//      virtual void Connect(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition // _ZN6RakNet7RakPeer7ConnectEPKctS2_iPNS_9PublicKeyEjjjj
//      virtual void ConnectWithSocket(char const*, unsigned short, char const*, int, RakNet::RakNetSocket2 *, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition // _ZN6RakNet7RakPeer17ConnectWithSocketEPKctS2_iPNS_13RakNetSocket2EPNS_9PublicKeyEjjj
//      virtual void Shutdown(unsigned int, unsigned char, PacketPriority); //TODO: incomplete function definition // _ZN6RakNet7RakPeer8ShutdownEjh14PacketPriority
        virtual bool IsActive()const; // _ZNK6RakNet7RakPeer8IsActiveEv
        virtual void GetConnectionList(RakNet::SystemAddress *, unsigned short *)const; // _ZNK6RakNet7RakPeer17GetConnectionListEPNS_13SystemAddressEPt
        virtual void GetNextSendReceipt(); // _ZN6RakNet7RakPeer18GetNextSendReceiptEv
        virtual void IncrementNextSendReceipt(); // _ZN6RakNet7RakPeer24IncrementNextSendReceiptEv
//      virtual void Send(char const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition // _ZN6RakNet7RakPeer4SendEPKci14PacketPriority17PacketReliabilitycNS_13AddressOrGUIDEbj
        virtual void SendLoopback(char const*, int); // _ZN6RakNet7RakPeer12SendLoopbackEPKci
//      virtual void Send(RakNet::BitStream const*, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition // _ZN6RakNet7RakPeer4SendEPKNS_9BitStreamE14PacketPriority17PacketReliabilitycNS_13AddressOrGUIDEbj
//      virtual void SendList(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition // _ZN6RakNet7RakPeer8SendListEPPKcPKii14PacketPriority17PacketReliabilitycNS_13AddressOrGUIDEbj
        virtual void Receive(); // _ZN6RakNet7RakPeer7ReceiveEv
        virtual void DeallocatePacket(RakNet::Packet *); // _ZN6RakNet7RakPeer16DeallocatePacketEPNS_6PacketE
        virtual void GetMaximumNumberOfPeers()const; // _ZNK6RakNet7RakPeer23GetMaximumNumberOfPeersEv
//      virtual void CloseConnection(RakNet::AddressOrGUID, bool, unsigned char, PacketPriority); //TODO: incomplete function definition // _ZN6RakNet7RakPeer15CloseConnectionENS_13AddressOrGUIDEbh14PacketPriority
        virtual void GetConnectionState(RakNet::AddressOrGUID); // _ZN6RakNet7RakPeer18GetConnectionStateENS_13AddressOrGUIDE
        virtual void CancelConnectionAttempt(RakNet::SystemAddress); // _ZN6RakNet7RakPeer23CancelConnectionAttemptENS_13SystemAddressE
        virtual void GetIndexFromSystemAddress(RakNet::SystemAddress)const; // _ZNK6RakNet7RakPeer25GetIndexFromSystemAddressENS_13SystemAddressE
        virtual void GetSystemAddressFromIndex(unsigned int); // _ZN6RakNet7RakPeer25GetSystemAddressFromIndexEj
        virtual void GetGUIDFromIndex(unsigned int); // _ZN6RakNet7RakPeer16GetGUIDFromIndexEj
//      virtual void GetSystemList(DataStructures::List<RakNet::SystemAddress> &, DataStructures::List<RakNet::RakNetGUID> &)const; //TODO: incomplete function definition // _ZNK6RakNet7RakPeer13GetSystemListERN14DataStructures4ListINS_13SystemAddressEEERNS2_INS_10RakNetGUIDEEE
        virtual void AddToBanList(char const*, unsigned int); // _ZN6RakNet7RakPeer12AddToBanListEPKcj
        virtual void RemoveFromBanList(char const*); // _ZN6RakNet7RakPeer17RemoveFromBanListEPKc
        virtual void ClearBanList(); // _ZN6RakNet7RakPeer12ClearBanListEv
        virtual bool IsBanned(char const*); // _ZN6RakNet7RakPeer8IsBannedEPKc
        virtual void SetLimitIPConnectionFrequency(bool); // _ZN6RakNet7RakPeer29SetLimitIPConnectionFrequencyEb
        virtual void Ping(RakNet::SystemAddress); // _ZN6RakNet7RakPeer4PingENS_13SystemAddressE
        virtual void Ping(char const*, unsigned short, bool, unsigned int); // _ZN6RakNet7RakPeer4PingEPKctbj
        virtual void SendNatTraversalMessage(RakNet::SystemAddress); // _ZN6RakNet7RakPeer23SendNatTraversalMessageENS_13SystemAddressE
        virtual void GetAveragePing(RakNet::AddressOrGUID); // _ZN6RakNet7RakPeer14GetAveragePingENS_13AddressOrGUIDE
        virtual void GetLastPing(RakNet::AddressOrGUID)const; // _ZNK6RakNet7RakPeer11GetLastPingENS_13AddressOrGUIDE
        virtual void GetLowestPing(RakNet::AddressOrGUID)const; // _ZNK6RakNet7RakPeer13GetLowestPingENS_13AddressOrGUIDE
        virtual void SetOccasionalPing(bool); // _ZN6RakNet7RakPeer17SetOccasionalPingEb
        virtual void GetClockDifferential(RakNet::AddressOrGUID); // _ZN6RakNet7RakPeer20GetClockDifferentialENS_13AddressOrGUIDE
        virtual void SetOfflinePingResponse(char const*, unsigned int); // _ZN6RakNet7RakPeer22SetOfflinePingResponseEPKcj
        virtual void GetOfflinePingResponse(char **, unsigned int *); // _ZN6RakNet7RakPeer22GetOfflinePingResponseEPPcPj
        virtual void GetInternalID(RakNet::SystemAddress, int)const; // _ZNK6RakNet7RakPeer13GetInternalIDENS_13SystemAddressEi
        virtual void SetInternalID(RakNet::SystemAddress, int); // _ZN6RakNet7RakPeer13SetInternalIDENS_13SystemAddressEi
        virtual void GetExternalID(RakNet::SystemAddress)const; // _ZNK6RakNet7RakPeer13GetExternalIDENS_13SystemAddressE
        virtual void GetMyGUID()const; // _ZNK6RakNet7RakPeer9GetMyGUIDEv
        virtual void resetMyGUID(); // _ZN6RakNet7RakPeer11resetMyGUIDEv
        virtual void GetMyBoundAddress(int); // _ZN6RakNet7RakPeer17GetMyBoundAddressEi
        virtual void GetGuidFromSystemAddress(RakNet::SystemAddress)const; // _ZNK6RakNet7RakPeer24GetGuidFromSystemAddressENS_13SystemAddressE
        virtual void GetSystemAddressFromGuid(RakNet::RakNetGUID)const; // _ZNK6RakNet7RakPeer24GetSystemAddressFromGuidENS_10RakNetGUIDE
        virtual void GetClientPublicKeyFromSystemAddress(RakNet::SystemAddress, char *)const; // _ZNK6RakNet7RakPeer35GetClientPublicKeyFromSystemAddressENS_13SystemAddressEPc
        virtual void SetTimeoutTime(unsigned int, RakNet::SystemAddress); // _ZN6RakNet7RakPeer14SetTimeoutTimeEjNS_13SystemAddressE
        virtual void GetTimeoutTime(RakNet::SystemAddress); // _ZN6RakNet7RakPeer14GetTimeoutTimeENS_13SystemAddressE
        virtual void GetMTUSize(RakNet::SystemAddress)const; // _ZNK6RakNet7RakPeer10GetMTUSizeENS_13SystemAddressE
        virtual void GetNumberOfAdapters(); // _ZN6RakNet7RakPeer19GetNumberOfAdaptersEv
        virtual void GetLocalAdapter(unsigned int); // _ZN6RakNet7RakPeer15GetLocalAdapterEj
        virtual void GetNumberOfAddresses(); // _ZN6RakNet7RakPeer20GetNumberOfAddressesEv
        virtual void GetLocalIP(unsigned int); // _ZN6RakNet7RakPeer10GetLocalIPEj
        virtual bool IsLocalIP(char const*); // _ZN6RakNet7RakPeer9IsLocalIPEPKc
        virtual void AllowConnectionResponseIPMigration(bool); // _ZN6RakNet7RakPeer34AllowConnectionResponseIPMigrationEb
        virtual void AdvertiseSystem(char const*, unsigned short, char const*, int, unsigned int); // _ZN6RakNet7RakPeer15AdvertiseSystemEPKctS2_ij
        virtual void SetSplitMessageProgressInterval(int); // _ZN6RakNet7RakPeer31SetSplitMessageProgressIntervalEi
        virtual void GetSplitMessageProgressInterval()const; // _ZNK6RakNet7RakPeer31GetSplitMessageProgressIntervalEv
        virtual void SetUnreliableTimeout(unsigned int); // _ZN6RakNet7RakPeer20SetUnreliableTimeoutEj
        virtual void SendTTL(char const*, unsigned short, int, unsigned int); // _ZN6RakNet7RakPeer7SendTTLEPKctij
        virtual void AttachPlugin(RakNet::PluginInterface2 *); // _ZN6RakNet7RakPeer12AttachPluginEPNS_16PluginInterface2E
        virtual void DetachPlugin(RakNet::PluginInterface2 *); // _ZN6RakNet7RakPeer12DetachPluginEPNS_16PluginInterface2E
        virtual void PushBackPacket(RakNet::Packet *, bool); // _ZN6RakNet7RakPeer14PushBackPacketEPNS_6PacketEb
        virtual void ChangeSystemAddress(RakNet::RakNetGUID, RakNet::SystemAddress const&); // _ZN6RakNet7RakPeer19ChangeSystemAddressENS_10RakNetGUIDERKNS_13SystemAddressE
        virtual void AllocatePacket(unsigned int); // _ZN6RakNet7RakPeer14AllocatePacketEj
        virtual void GetSocket(RakNet::SystemAddress); // _ZN6RakNet7RakPeer9GetSocketENS_13SystemAddressE
//      virtual void GetSockets(DataStructures::List<RakNet::RakNetSocket2 *> &); //TODO: incomplete function definition // _ZN6RakNet7RakPeer10GetSocketsERN14DataStructures4ListIPNS_13RakNetSocket2EEE
//      virtual void ReleaseSockets(DataStructures::List<RakNet::RakNetSocket2 *> &); //TODO: incomplete function definition // _ZN6RakNet7RakPeer14ReleaseSocketsERN14DataStructures4ListIPNS_13RakNetSocket2EEE
        virtual void WriteOutOfBandHeader(RakNet::BitStream *); // _ZN6RakNet7RakPeer20WriteOutOfBandHeaderEPNS_9BitStreamE
//      virtual void SetUserUpdateThread(void ((RakNet::RakPeerInterface *, void *), , void *); //TODO: incomplete function definition // _ZN6RakNet7RakPeer19SetUserUpdateThreadEPFvPNS_16RakPeerInterfaceEPvES3_
//      virtual void SetIncomingDatagramEventHandler(bool ((RakNet::RNS2RecvStruct *), ); //TODO: incomplete function definition // _ZN6RakNet7RakPeer31SetIncomingDatagramEventHandlerEPFbPNS_14RNS2RecvStructEE
        virtual void ApplyNetworkSimulator(float, unsigned short, unsigned short); // _ZN6RakNet7RakPeer21ApplyNetworkSimulatorEftt
        virtual void SetPerConnectionOutgoingBandwidthLimit(unsigned int); // _ZN6RakNet7RakPeer38SetPerConnectionOutgoingBandwidthLimitEj
        virtual bool IsNetworkSimulatorActive(); // _ZN6RakNet7RakPeer24IsNetworkSimulatorActiveEv
//      virtual void GetStatistics(RakNet::SystemAddress, RakNet::RakNetStatistics *); //TODO: incomplete function definition // _ZN6RakNet7RakPeer13GetStatisticsENS_13SystemAddressEPNS_16RakNetStatisticsE
//      virtual void GetStatistics(unsigned int, RakNet::RakNetStatistics *); //TODO: incomplete function definition // _ZN6RakNet7RakPeer13GetStatisticsEjPNS_16RakNetStatisticsE
//      virtual void GetStatisticsList(DataStructures::List<RakNet::SystemAddress> &, DataStructures::List<RakNet::RakNetGUID> &, DataStructures::List<RakNet::RakNetStatistics> &); //TODO: incomplete function definition // _ZN6RakNet7RakPeer17GetStatisticsListERN14DataStructures4ListINS_13SystemAddressEEERNS2_INS_10RakNetGUIDEEERNS2_INS_16RakNetStatisticsEEE
        virtual void GetReceiveBufferSize(); // _ZN6RakNet7RakPeer20GetReceiveBufferSizeEv
        virtual void RunUpdateCycle(RakNet::BitStream &); // _ZN6RakNet7RakPeer14RunUpdateCycleERNS_9BitStreamE
        virtual void SendOutOfBand(char const*, unsigned short, char const*, unsigned int, unsigned int); // _ZN6RakNet7RakPeer13SendOutOfBandEPKctS2_jj
        virtual void DeallocRNS2RecvStruct(RakNet::RNS2RecvStruct *, char const*, unsigned int); // _ZN6RakNet7RakPeer21DeallocRNS2RecvStructEPNS_14RNS2RecvStructEPKcj
        virtual void AllocRNS2RecvStruct(char const*, unsigned int); // _ZN6RakNet7RakPeer19AllocRNS2RecvStructEPKcj
        virtual void OnRNS2Recv(RakNet::RNS2RecvStruct *); // _ZN6RakNet7RakPeer10OnRNS2RecvEPNS_14RNS2RecvStructE
        void AllocPacket(unsigned int, char const*, unsigned int); // _ZN6RakNet7RakPeer11AllocPacketEjPKcj
        void AllocPacket(unsigned int, unsigned char *, char const*, unsigned int); // _ZN6RakNet7RakPeer11AllocPacketEjPhPKcj
        RakPeer(); // _ZN6RakNet7RakPeerC2Ev
        void GenerateGUID(); // _ZN6RakNet7RakPeer12GenerateGUIDEv
        void ResetSendReceipt(); // _ZN6RakNet7RakPeer16ResetSendReceiptEv
        void FillIPList(); // _ZN6RakNet7RakPeer10FillIPListEv
        void FillAdapterList(); // _ZN6RakNet7RakPeer15FillAdapterListEv
        void GenerateSeedFromGuid(); // _ZN6RakNet7RakPeer20GenerateSeedFromGuidEv
        void DerefAllSockets(); // _ZN6RakNet7RakPeer15DerefAllSocketsEv
        void ClearBufferedCommands(); // _ZN6RakNet7RakPeer21ClearBufferedCommandsEv
        void ClearBufferedPackets(); // _ZN6RakNet7RakPeer20ClearBufferedPacketsEv
        void ClearSocketQueryOutput(); // _ZN6RakNet7RakPeer22ClearSocketQueryOutputEv
        void GetRakNetSocketFromUserConnectionSocketIndex(unsigned int)const; // _ZNK6RakNet7RakPeer44GetRakNetSocketFromUserConnectionSocketIndexEj
//      void SendConnectionRequest(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition // _ZN6RakNet7RakPeer21SendConnectionRequestEPKctS2_iPNS_9PublicKeyEjjjjj
//      void SendConnectionRequest(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, RakNet::RakNetSocket2 *); //TODO: incomplete function definition // _ZN6RakNet7RakPeer21SendConnectionRequestEPKctS2_iPNS_9PublicKeyEjjjjjPNS_13RakNetSocket2E
//      void NotifyAndFlagForShutdown(RakNet::SystemAddress, bool, unsigned char, PacketPriority); //TODO: incomplete function definition // _ZN6RakNet7RakPeer24NotifyAndFlagForShutdownENS_13SystemAddressEbh14PacketPriority
        void ClearRequestedConnectionList(); // _ZN6RakNet7RakPeer28ClearRequestedConnectionListEv
        void ClearRemoteSystemLookup(); // _ZN6RakNet7RakPeer23ClearRemoteSystemLookupEv
        bool IsLoopbackAddress(RakNet::AddressOrGUID const&, bool)const; // _ZNK6RakNet7RakPeer17IsLoopbackAddressERKNS_13AddressOrGUIDEb
//      void SendBuffered(char const*, unsigned int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, unsigned int); //TODO: incomplete function definition // _ZN6RakNet7RakPeer12SendBufferedEPKcj14PacketPriority17PacketReliabilitycNS_13AddressOrGUIDEbNS0_18RemoteSystemStruct11ConnectModeEj
        void GetLoopbackAddress()const; // _ZNK6RakNet7RakPeer18GetLoopbackAddressEv
//      void SendBufferedList(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, unsigned int); //TODO: incomplete function definition // _ZN6RakNet7RakPeer16SendBufferedListEPPKcPKii14PacketPriority17PacketReliabilitycNS_13AddressOrGUIDEbNS0_18RemoteSystemStruct11ConnectModeEj
        void ShiftIncomingTimestamp(unsigned char *, RakNet::SystemAddress const&)const; // _ZNK6RakNet7RakPeer22ShiftIncomingTimestampEPhRKNS_13SystemAddressE
//      void CallPluginCallbacks(DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::Packet *); //TODO: incomplete function definition // _ZN6RakNet7RakPeer19CallPluginCallbacksERN14DataStructures4ListIPNS_16PluginInterface2EEEPNS_6PacketE
//      void CloseConnectionInternal(RakNet::AddressOrGUID const&, bool, bool, unsigned char, PacketPriority); //TODO: incomplete function definition // _ZN6RakNet7RakPeer23CloseConnectionInternalERKNS_13AddressOrGUIDEbbh14PacketPriority
        void GetIndexFromSystemAddress(RakNet::SystemAddress, bool)const; // _ZNK6RakNet7RakPeer25GetIndexFromSystemAddressENS_13SystemAddressEb
        void GetIndexFromGuid(RakNet::RakNetGUID); // _ZN6RakNet7RakPeer16GetIndexFromGuidENS_10RakNetGUIDE
//      void PingInternal(RakNet::SystemAddress, bool, PacketReliability); //TODO: incomplete function definition // _ZN6RakNet7RakPeer12PingInternalENS_13SystemAddressEb17PacketReliability
        void GetRemoteSystem(RakNet::AddressOrGUID, bool, bool)const; // _ZNK6RakNet7RakPeer15GetRemoteSystemENS_13AddressOrGUIDEbb
        void GetClockDifferentialInt(RakNet::RakPeer::RemoteSystemStruct *)const; // _ZNK6RakNet7RakPeer23GetClockDifferentialIntEPNS0_18RemoteSystemStructE
        void GetRemoteSystemFromSystemAddress(RakNet::SystemAddress, bool, bool)const; // _ZNK6RakNet7RakPeer32GetRemoteSystemFromSystemAddressENS_13SystemAddressEbb
        void GetSystemIndexFromGuid(RakNet::RakNetGUID)const; // _ZNK6RakNet7RakPeer22GetSystemIndexFromGuidENS_10RakNetGUIDE
        void GetRemoteSystemIndex(RakNet::SystemAddress const&)const; // _ZNK6RakNet7RakPeer20GetRemoteSystemIndexERKNS_13SystemAddressE
        void ValidateRemoteSystemLookup()const; // _ZNK6RakNet7RakPeer26ValidateRemoteSystemLookupEv
        void GetRemoteSystemFromGUID(RakNet::RakNetGUID, bool)const; // _ZNK6RakNet7RakPeer23GetRemoteSystemFromGUIDENS_10RakNetGUIDEb
        void ParseConnectionRequestPacket(RakNet::RakPeer::RemoteSystemStruct *, RakNet::SystemAddress const&, char const*, int); // _ZN6RakNet7RakPeer28ParseConnectionRequestPacketEPNS0_18RemoteSystemStructERKNS_13SystemAddressEPKci
//      void SendImmediate(char *, unsigned int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, bool, unsigned long, unsigned int); //TODO: incomplete function definition // _ZN6RakNet7RakPeer13SendImmediateEPcj14PacketPriority17PacketReliabilitycNS_13AddressOrGUIDEbbmj
        void OnConnectionRequest(RakNet::RakPeer::RemoteSystemStruct *, unsigned long); // _ZN6RakNet7RakPeer19OnConnectionRequestEPNS0_18RemoteSystemStructEm
        void GetNumberOfRemoteInitiatedConnections()const; // _ZNK6RakNet7RakPeer37GetNumberOfRemoteInitiatedConnectionsEv
//      void AssignSystemAddressToRemoteSystemList(RakNet::SystemAddress, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, RakNet::RakNetSocket2 *, bool *, RakNet::SystemAddress, int, RakNet::RakNetGUID, bool); //TODO: incomplete function definition // _ZN6RakNet7RakPeer37AssignSystemAddressToRemoteSystemListENS_13SystemAddressENS0_18RemoteSystemStruct11ConnectModeEPNS_13RakNetSocket2EPbS1_iNS_10RakNetGUIDEb
        void ReferenceRemoteSystem(RakNet::SystemAddress const&, unsigned int); // _ZN6RakNet7RakPeer21ReferenceRemoteSystemERKNS_13SystemAddressEj
        void AddToActiveSystemList(unsigned int); // _ZN6RakNet7RakPeer21AddToActiveSystemListEj
        void GetBestClockDifferential(RakNet::SystemAddress)const; // _ZNK6RakNet7RakPeer24GetBestClockDifferentialENS_13SystemAddressE
        void RemoteSystemLookupHashIndex(RakNet::SystemAddress const&)const; // _ZNK6RakNet7RakPeer27RemoteSystemLookupHashIndexERKNS_13SystemAddressE
        void GetRemoteSystem(RakNet::SystemAddress const&)const; // _ZNK6RakNet7RakPeer15GetRemoteSystemERKNS_13SystemAddressE
        void DereferenceRemoteSystem(RakNet::SystemAddress const&); // _ZN6RakNet7RakPeer23DereferenceRemoteSystemERKNS_13SystemAddressE
        void RemoveFromActiveSystemList(RakNet::SystemAddress const&); // _ZN6RakNet7RakPeer26RemoveFromActiveSystemListERKNS_13SystemAddressE
        void AllowIncomingConnections()const; // _ZNK6RakNet7RakPeer24AllowIncomingConnectionsEv
        void SetupBufferedPackets(); // _ZN6RakNet7RakPeer20SetupBufferedPacketsEv
        void PushBufferedPacket(RakNet::RNS2RecvStruct *); // _ZN6RakNet7RakPeer18PushBufferedPacketEPNS_14RNS2RecvStructE
        void PopBufferedPacket(); // _ZN6RakNet7RakPeer17PopBufferedPacketEv
        void OnConnectedPong(unsigned long, unsigned long, RakNet::RakPeer::RemoteSystemStruct *); // _ZN6RakNet7RakPeer15OnConnectedPongEmmPNS0_18RemoteSystemStructE
        void AddPacketToProducer(RakNet::Packet *); // _ZN6RakNet7RakPeer19AddPacketToProducerEPNS_6PacketE
        class BufferedCommandStruct {

        public:
            BufferedCommandStruct(); // _ZN6RakNet7RakPeer21BufferedCommandStructC2Ev
        };
        class RemoteSystemStruct {

        public:
            RemoteSystemStruct(); // _ZN6RakNet7RakPeer18RemoteSystemStructC2Ev
            ~RemoteSystemStruct(); // _ZN6RakNet7RakPeer18RemoteSystemStructD2Ev
        };
        class RequestedConnectionStruct {

        public:
            RequestedConnectionStruct(); // _ZN6RakNet7RakPeer25RequestedConnectionStructC2Ev
        };
        class SocketQueryOutput {

        public:
            ~SocketQueryOutput(); // _ZN6RakNet7RakPeer17SocketQueryOutputD2Ev
            SocketQueryOutput(); // _ZN6RakNet7RakPeer17SocketQueryOutputC2Ev
        };
    };
}
