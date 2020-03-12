#pragma once

#include "RakNetGUID.h"
#include "SystemAddress.h"
#include "AddressOrGUID.h"
#include "RakPeerInterface.h"
#include "RNS2EventHandler.h"


namespace RakNet {

    class RakPeer : RakNet::RakPeerInterface, RakNet::RNS2EventHandler {

    public:
        class BufferedCommandStruct;
        class RemoteSystemStruct;
        class RequestedConnectionStruct;
        class SocketQueryOutput;

        virtual void GetIncomingPassword(char *, int *);
        virtual void SetIncomingPassword(char const*, int);
        virtual void CancelConnectionAttempt(RakNet::SystemAddress);
        virtual void ApplyNetworkSimulator(float, unsigned short, unsigned short);
//      virtual void SetUserUpdateThread(void ((RakNet::RakPeerInterface *, void *), , void *); //TODO: incomplete function definition
        virtual void GetMaximumNumberOfPeers()const;
        virtual void GetLowestPing(RakNet::AddressOrGUID)const;
        virtual void GetSystemAddressFromIndex(unsigned int);
        virtual void GetReceiveBufferSize();
        virtual void GetExternalID(RakNet::SystemAddress)const;
        virtual void GetIndexFromSystemAddress(RakNet::SystemAddress)const;
        virtual void GetSplitMessageProgressInterval()const;
        virtual void DetachPlugin(RakNet::PluginInterface2 *);
//      virtual void GetStatisticsList(DataStructures::List<RakNet::SystemAddress> &, DataStructures::List<RakNet::RakNetGUID> &, DataStructures::List<RakNet::RakNetStatistics> &); //TODO: incomplete function definition
        virtual void ClearBanList();
        virtual void GetLocalAdapter(unsigned int);
        virtual void PushBackPacket(RakNet::Packet *, bool);
        virtual void SendNatTraversalMessage(RakNet::SystemAddress);
        virtual void GetLastPing(RakNet::AddressOrGUID)const;
        virtual void SetInternalID(RakNet::SystemAddress, int);
        virtual void Ping(char const*, unsigned short, bool, unsigned int);
        virtual void InitializeSecurity(char const*, char const*, bool);
        virtual bool IsInSecurityExceptionList(char const*);
//      virtual void Send(char const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition
        virtual void GetMTUSize(RakNet::SystemAddress)const;
        virtual void NumberOfConnections()const;
//      virtual void CloseConnection(RakNet::AddressOrGUID, bool, unsigned char, PacketPriority); //TODO: incomplete function definition
        virtual void GetClockDifferential(RakNet::AddressOrGUID);
        virtual void SetPerConnectionOutgoingBandwidthLimit(unsigned int);
//      virtual void ConnectWithSocket(char const*, unsigned short, char const*, int, RakNet::RakNetSocket2 *, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
//      virtual void Shutdown(unsigned int, unsigned char, PacketPriority); //TODO: incomplete function definition
        virtual void GetInternalID(RakNet::SystemAddress, int)const;
//      virtual void ReleaseSockets(DataStructures::List<RakNet::RakNetSocket2 *> &); //TODO: incomplete function definition
        virtual void SetOccasionalPing(bool);
        virtual void GetOfflinePingResponse(char **, unsigned int *);
//      virtual void GetStatistics(RakNet::SystemAddress, RakNet::RakNetStatistics *); //TODO: incomplete function definition
        virtual void AdvertiseSystem(char const*, unsigned short, char const*, int, unsigned int);
        virtual bool IsLocalIP(char const*);
        virtual bool IsBanned(char const*);
        virtual void GetSocket(RakNet::SystemAddress);
        virtual void Startup(unsigned int, RakNet::SocketDescriptor *, unsigned int, int);
//      virtual void GetStatistics(unsigned int, RakNet::RakNetStatistics *); //TODO: incomplete function definition
        virtual void GetConnectionList(RakNet::SystemAddress *, unsigned short *)const;
        virtual void RemoveFromBanList(char const*);
        virtual void GetNumberOfAdapters();
        virtual void ChangeSystemAddress(RakNet::RakNetGUID, RakNet::SystemAddress const&);
        virtual void GetConnectionState(RakNet::AddressOrGUID);
//      virtual void SetIncomingDatagramEventHandler(bool ((RakNet::RNS2RecvStruct *), ); //TODO: incomplete function definition
        virtual void SetSplitMessageProgressInterval(int);
        virtual void DisableSecurity();
        virtual void DeallocRNS2RecvStruct(RakNet::RNS2RecvStruct *, char const*, unsigned int);
        virtual void SetMaximumIncomingConnections(unsigned short);
        virtual void OnRNS2Recv(RakNet::RNS2RecvStruct *);
        virtual void AllowConnectionResponseIPMigration(bool);
        virtual void GetMyBoundAddress(int);
        virtual void RemoveFromSecurityExceptionList(char const*);
//      virtual void SendList(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition
        virtual void resetMyGUID();
        virtual void IncrementNextSendReceipt();
        virtual void GetLocalIP(unsigned int);
//      virtual void GetSockets(DataStructures::List<RakNet::RakNetSocket2 *> &); //TODO: incomplete function definition
        virtual void Receive();
        virtual void SetTimeoutTime(unsigned int, RakNet::SystemAddress);
        virtual void GetSystemAddressFromGuid(RakNet::RakNetGUID)const;
        ~RakPeer();
//      virtual void Connect(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
//      virtual void Send(RakNet::BitStream const*, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition
        virtual void AllocRNS2RecvStruct(char const*, unsigned int);
        virtual void SetUnreliableTimeout(unsigned int);
        virtual void GetClientPublicKeyFromSystemAddress(RakNet::SystemAddress, char *)const;
        virtual void SendLoopback(char const*, int);
        virtual void GetMyGUID()const;
        virtual bool IsNetworkSimulatorActive();
        virtual void GetTimeoutTime(RakNet::SystemAddress);
        virtual void RunUpdateCycle(RakNet::BitStream &);
        virtual void AllocatePacket(unsigned int);
        virtual void GetGuidFromSystemAddress(RakNet::SystemAddress)const;
        virtual void WriteOutOfBandHeader(RakNet::BitStream *);
        virtual void GetNumberOfAddresses();
        virtual void GetNextSendReceipt();
        virtual void SendTTL(char const*, unsigned short, int, unsigned int);
        virtual void AddToBanList(char const*, unsigned int);
        virtual void Ping(RakNet::SystemAddress);
        virtual void AddToSecurityExceptionList(char const*);
//      virtual void GetSystemList(DataStructures::List<RakNet::SystemAddress> &, DataStructures::List<RakNet::RakNetGUID> &)const; //TODO: incomplete function definition
        virtual void GetAveragePing(RakNet::AddressOrGUID);
        virtual void AttachPlugin(RakNet::PluginInterface2 *);
        virtual void SendOutOfBand(char const*, unsigned short, char const*, unsigned int, unsigned int);
        virtual void SetOfflinePingResponse(char const*, unsigned int);
        virtual bool IsActive()const;
        virtual void SetLimitIPConnectionFrequency(bool);
        virtual void GetGUIDFromIndex(unsigned int);
        virtual void DeallocatePacket(RakNet::Packet *);
        virtual void GetMaximumIncomingConnections()const;
        void AllocPacket(unsigned int, char const*, unsigned int);
//      void SendImmediate(char *, unsigned int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, bool, unsigned long, unsigned int); //TODO: incomplete function definition
        void ReferenceRemoteSystem(RakNet::SystemAddress const&, unsigned int);
        void ClearRemoteSystemLookup();
        void AllowIncomingConnections()const;
        void GetClockDifferentialInt(RakNet::RakPeer::RemoteSystemStruct *)const;
        void PopBufferedPacket();
        void GetRemoteSystemFromGUID(RakNet::RakNetGUID, bool)const;
        void ParseConnectionRequestPacket(RakNet::RakPeer::RemoteSystemStruct *, RakNet::SystemAddress const&, char const*, int);
        void GetRemoteSystemIndex(RakNet::SystemAddress const&)const;
        void RemoteSystemLookupHashIndex(RakNet::SystemAddress const&)const;
        void GenerateGUID();
        void ResetSendReceipt();
        void GetLoopbackAddress()const;
        void GetIndexFromGuid(RakNet::RakNetGUID);
        void AddPacketToProducer(RakNet::Packet *);
        void GetSystemIndexFromGuid(RakNet::RakNetGUID)const;
        void OnConnectedPong(unsigned long, unsigned long, RakNet::RakPeer::RemoteSystemStruct *);
//      void SendConnectionRequest(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
        void PushBufferedPacket(RakNet::RNS2RecvStruct *);
//      void SendBuffered(char const*, unsigned int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, unsigned int); //TODO: incomplete function definition
//      void SendConnectionRequest(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, RakNet::RakNetSocket2 *); //TODO: incomplete function definition
//      void AssignSystemAddressToRemoteSystemList(RakNet::SystemAddress, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, RakNet::RakNetSocket2 *, bool *, RakNet::SystemAddress, int, RakNet::RakNetGUID, bool); //TODO: incomplete function definition
        void ShiftIncomingTimestamp(unsigned char *, RakNet::SystemAddress const&)const;
        void DereferenceRemoteSystem(RakNet::SystemAddress const&);
        void GetRemoteSystem(RakNet::SystemAddress const&)const;
        bool IsLoopbackAddress(RakNet::AddressOrGUID const&, bool)const;
        void OnConnectionRequest(RakNet::RakPeer::RemoteSystemStruct *, unsigned long);
        void ClearRequestedConnectionList();
//      void SendBufferedList(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, unsigned int); //TODO: incomplete function definition
        void DerefAllSockets();
        void AddToActiveSystemList(unsigned int);
        void AllocPacket(unsigned int, unsigned char *, char const*, unsigned int);
        void FillAdapterList();
        void ClearSocketQueryOutput();
        void ClearBufferedPackets();
        void RemoveFromActiveSystemList(RakNet::SystemAddress const&);
        void ValidateRemoteSystemLookup()const;
//      void NotifyAndFlagForShutdown(RakNet::SystemAddress, bool, unsigned char, PacketPriority); //TODO: incomplete function definition
        void FillIPList();
        void SetupBufferedPackets();
        void GetRakNetSocketFromUserConnectionSocketIndex(unsigned int)const;
        void GetNumberOfRemoteInitiatedConnections()const;
        void ClearBufferedCommands();
        RakPeer();
        void GetBestClockDifferential(RakNet::SystemAddress)const;
        void GetRemoteSystemFromSystemAddress(RakNet::SystemAddress, bool, bool)const;
        void GetIndexFromSystemAddress(RakNet::SystemAddress, bool)const;
        void GetRemoteSystem(RakNet::AddressOrGUID, bool, bool)const;
        void GenerateSeedFromGuid();
//      void CloseConnectionInternal(RakNet::AddressOrGUID const&, bool, bool, unsigned char, PacketPriority); //TODO: incomplete function definition
//      void CallPluginCallbacks(DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::Packet *); //TODO: incomplete function definition
//      void PingInternal(RakNet::SystemAddress, bool, PacketReliability); //TODO: incomplete function definition
        class BufferedCommandStruct {

        public:
            BufferedCommandStruct();
        };
        class RemoteSystemStruct {

        public:
            RemoteSystemStruct();
            ~RemoteSystemStruct();
        };
        class RequestedConnectionStruct {

        public:
            RequestedConnectionStruct();
        };
        class SocketQueryOutput {

        public:
            ~SocketQueryOutput();
            SocketQueryOutput();
        };
    };
}
