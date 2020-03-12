#pragma once

#include "AddressOrGUID.h"
#include "PluginInterface2.h"
#include "SocketDescriptor.h"
#include "RNS2EventHandler.h"
#include "SystemAddress.h"
#include "RakNetGUID.h"
#include "BitStream.h"
#include "RNS2RecvStruct.h"
#include "RakPeerInterface.h"
#include "Packet.h"
#include "RakNetSocket2.h"


namespace RakNet {

    class RakPeer : RakNet::RakPeerInterface, RakNet::RNS2EventHandler {

    public:
        class BufferedCommandStruct;
        class RemoteSystemStruct;
        class RequestedConnectionStruct;
        class SocketQueryOutput;

        virtual void AdvertiseSystem(char const*, unsigned short, char const*, int, unsigned int);
        virtual void AllowConnectionResponseIPMigration(bool);
        virtual void SendTTL(char const*, unsigned short, int, unsigned int);
        virtual void GetIncomingPassword(char *, int *);
        virtual void SendLoopback(char const*, int);
        virtual void SetTimeoutTime(unsigned int, RakNet::SystemAddress);
        virtual void GetNextSendReceipt();
        virtual void RemoveFromBanList(char const*);
        virtual void ClearBanList();
        virtual void GetReceiveBufferSize();
//      virtual void Shutdown(unsigned int, unsigned char, PacketPriority); //TODO: incomplete function definition
        virtual void SetOfflinePingResponse(char const*, unsigned int);
        virtual void GetSplitMessageProgressInterval()const;
//      virtual void GetStatistics(unsigned int, RakNet::RakNetStatistics *); //TODO: incomplete function definition
        virtual void GetTimeoutTime(RakNet::SystemAddress);
        virtual void GetLastPing(RakNet::AddressOrGUID)const;
        virtual void DeallocRNS2RecvStruct(RakNet::RNS2RecvStruct *, char const*, unsigned int);
//      virtual void GetStatisticsList(DataStructures::List<RakNet::SystemAddress> &, DataStructures::List<RakNet::RakNetGUID> &, DataStructures::List<RakNet::RakNetStatistics> &); //TODO: incomplete function definition
        virtual void NumberOfConnections()const;
        virtual void ChangeSystemAddress(RakNet::RakNetGUID, RakNet::SystemAddress const&);
        virtual bool IsNetworkSimulatorActive();
        virtual void AllocRNS2RecvStruct(char const*, unsigned int);
        virtual void Receive();
        virtual void SetUnreliableTimeout(unsigned int);
        virtual void GetExternalID(RakNet::SystemAddress)const;
        virtual void GetMTUSize(RakNet::SystemAddress)const;
        virtual void GetNumberOfAddresses();
//      virtual void ConnectWithSocket(char const*, unsigned short, char const*, int, RakNet::RakNetSocket2 *, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
//      virtual void GetStatistics(RakNet::SystemAddress, RakNet::RakNetStatistics *); //TODO: incomplete function definition
        virtual void PushBackPacket(RakNet::Packet *, bool);
//      virtual void SendList(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition
        virtual void GetMyBoundAddress(int);
        virtual void RemoveFromSecurityExceptionList(char const*);
        virtual void GetMyGUID()const;
        virtual void GetNumberOfAdapters();
//      virtual void CloseConnection(RakNet::AddressOrGUID, bool, unsigned char, PacketPriority); //TODO: incomplete function definition
        virtual void WriteOutOfBandHeader(RakNet::BitStream *);
        virtual void RunUpdateCycle(RakNet::BitStream &);
        virtual void InitializeSecurity(char const*, char const*, bool);
        virtual void SendNatTraversalMessage(RakNet::SystemAddress);
        virtual void GetConnectionList(RakNet::SystemAddress *, unsigned short *)const;
        virtual void CancelConnectionAttempt(RakNet::SystemAddress);
        virtual void DisableSecurity();
        virtual void DeallocatePacket(RakNet::Packet *);
//      virtual void Send(RakNet::BitStream const*, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition
        virtual void GetMaximumIncomingConnections()const;
//      virtual void Connect(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
        virtual void OnRNS2Recv(RakNet::RNS2RecvStruct *);
        virtual void SetOccasionalPing(bool);
        virtual void GetOfflinePingResponse(char **, unsigned int *);
        virtual bool IsLocalIP(char const*);
        virtual void GetSocket(RakNet::SystemAddress);
        virtual void GetGuidFromSystemAddress(RakNet::SystemAddress)const;
        virtual void DetachPlugin(RakNet::PluginInterface2 *);
        virtual void AttachPlugin(RakNet::PluginInterface2 *);
        virtual void GetLocalAdapter(unsigned int);
        virtual void AddToSecurityExceptionList(char const*);
        virtual void AllocatePacket(unsigned int);
        virtual void GetConnectionState(RakNet::AddressOrGUID);
        ~RakPeer();
        virtual void resetMyGUID();
//      virtual void GetSystemList(DataStructures::List<RakNet::SystemAddress> &, DataStructures::List<RakNet::RakNetGUID> &)const; //TODO: incomplete function definition
        virtual void SendOutOfBand(char const*, unsigned short, char const*, unsigned int, unsigned int);
//      virtual void SetUserUpdateThread(void ((RakNet::RakPeerInterface *, void *), , void *); //TODO: incomplete function definition
        virtual void GetGUIDFromIndex(unsigned int);
        virtual void ApplyNetworkSimulator(float, unsigned short, unsigned short);
        virtual void SetInternalID(RakNet::SystemAddress, int);
        virtual void GetMaximumNumberOfPeers()const;
        virtual void Startup(unsigned int, RakNet::SocketDescriptor *, unsigned int, int);
        virtual void GetSystemAddressFromIndex(unsigned int);
        virtual bool IsActive()const;
        virtual void SetPerConnectionOutgoingBandwidthLimit(unsigned int);
        virtual void IncrementNextSendReceipt();
        virtual void SetMaximumIncomingConnections(unsigned short);
//      virtual void SetIncomingDatagramEventHandler(bool ((RakNet::RNS2RecvStruct *), ); //TODO: incomplete function definition
        virtual void SetLimitIPConnectionFrequency(bool);
        virtual void SetSplitMessageProgressInterval(int);
        virtual void GetInternalID(RakNet::SystemAddress, int)const;
//      virtual void Send(char const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition
        virtual void GetAveragePing(RakNet::AddressOrGUID);
        virtual void GetIndexFromSystemAddress(RakNet::SystemAddress)const;
        virtual void SetIncomingPassword(char const*, int);
        virtual bool IsInSecurityExceptionList(char const*);
//      virtual void GetSockets(DataStructures::List<RakNet::RakNetSocket2 *> &); //TODO: incomplete function definition
        virtual void GetLowestPing(RakNet::AddressOrGUID)const;
        virtual void AddToBanList(char const*, unsigned int);
        virtual void GetClientPublicKeyFromSystemAddress(RakNet::SystemAddress, char *)const;
        virtual void Ping(RakNet::SystemAddress);
        virtual void GetSystemAddressFromGuid(RakNet::RakNetGUID)const;
        virtual void Ping(char const*, unsigned short, bool, unsigned int);
        virtual void GetClockDifferential(RakNet::AddressOrGUID);
        virtual bool IsBanned(char const*);
//      virtual void ReleaseSockets(DataStructures::List<RakNet::RakNetSocket2 *> &); //TODO: incomplete function definition
        virtual void GetLocalIP(unsigned int);
        void AllocPacket(unsigned int, unsigned char *, char const*, unsigned int);
        void ClearBufferedPackets();
        void GetIndexFromSystemAddress(RakNet::SystemAddress, bool)const;
//      void CallPluginCallbacks(DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::Packet *); //TODO: incomplete function definition
        void AllocPacket(unsigned int, char const*, unsigned int);
        void OnConnectionRequest(RakNet::RakPeer::RemoteSystemStruct *, unsigned long);
        void PushBufferedPacket(RakNet::RNS2RecvStruct *);
        void GetRemoteSystemFromGUID(RakNet::RakNetGUID, bool)const;
        void ParseConnectionRequestPacket(RakNet::RakPeer::RemoteSystemStruct *, RakNet::SystemAddress const&, char const*, int);
        void GetRemoteSystemFromSystemAddress(RakNet::SystemAddress, bool, bool)const;
//      void NotifyAndFlagForShutdown(RakNet::SystemAddress, bool, unsigned char, PacketPriority); //TODO: incomplete function definition
        void GetRemoteSystem(RakNet::AddressOrGUID, bool, bool)const;
        void RemoteSystemLookupHashIndex(RakNet::SystemAddress const&)const;
        void OnConnectedPong(unsigned long, unsigned long, RakNet::RakPeer::RemoteSystemStruct *);
        void GetNumberOfRemoteInitiatedConnections()const;
//      void SendBufferedList(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, unsigned int); //TODO: incomplete function definition
        void GetLoopbackAddress()const;
        void DereferenceRemoteSystem(RakNet::SystemAddress const&);
        void ClearSocketQueryOutput();
//      void CloseConnectionInternal(RakNet::AddressOrGUID const&, bool, bool, unsigned char, PacketPriority); //TODO: incomplete function definition
        void GetSystemIndexFromGuid(RakNet::RakNetGUID)const;
        void GetRemoteSystem(RakNet::SystemAddress const&)const;
        void SetupBufferedPackets();
        void ClearRequestedConnectionList();
        void AddPacketToProducer(RakNet::Packet *);
        void ReferenceRemoteSystem(RakNet::SystemAddress const&, unsigned int);
        bool IsLoopbackAddress(RakNet::AddressOrGUID const&, bool)const;
        void AddToActiveSystemList(unsigned int);
        void GetIndexFromGuid(RakNet::RakNetGUID);
        void ShiftIncomingTimestamp(unsigned char *, RakNet::SystemAddress const&)const;
//      void SendConnectionRequest(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, RakNet::RakNetSocket2 *); //TODO: incomplete function definition
        void GenerateSeedFromGuid();
        void GetBestClockDifferential(RakNet::SystemAddress)const;
        void GetClockDifferentialInt(RakNet::RakPeer::RemoteSystemStruct *)const;
//      void SendImmediate(char *, unsigned int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, bool, unsigned long, unsigned int); //TODO: incomplete function definition
        void ClearBufferedCommands();
        void PopBufferedPacket();
        void GetRemoteSystemIndex(RakNet::SystemAddress const&)const;
        void DerefAllSockets();
        void GetRakNetSocketFromUserConnectionSocketIndex(unsigned int)const;
//      void PingInternal(RakNet::SystemAddress, bool, PacketReliability); //TODO: incomplete function definition
//      void AssignSystemAddressToRemoteSystemList(RakNet::SystemAddress, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, RakNet::RakNetSocket2 *, bool *, RakNet::SystemAddress, int, RakNet::RakNetGUID, bool); //TODO: incomplete function definition
//      void SendBuffered(char const*, unsigned int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, unsigned int); //TODO: incomplete function definition
        RakPeer();
        void FillAdapterList();
//      void SendConnectionRequest(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
        void AllowIncomingConnections()const;
        void FillIPList();
        void ValidateRemoteSystemLookup()const;
        void ClearRemoteSystemLookup();
        void GenerateGUID();
        void ResetSendReceipt();
        void RemoveFromActiveSystemList(RakNet::SystemAddress const&);
        class BufferedCommandStruct {

        public:
            BufferedCommandStruct();
        };
        class RemoteSystemStruct {

        public:
            ~RemoteSystemStruct();
            RemoteSystemStruct();
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
