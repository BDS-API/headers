#pragma once

#include "./SystemAddress.h"
#include "./RakNetSocket2.h"
#include "./PluginInterface2.h"
#include "./RNS2RecvStruct.h"
#include "./RemoteSystemStruct.h"
#include "./SocketDescriptor.h"
#include "./Packet.h"
#include "./RakNetGUID.h"
#include "./BitStream.h"
#include "./RakPeerInterface.h"
#include "./AddressOrGUID.h"
#include "./RNS2EventHandler.h"


namespace RakNet {

class RakPeer : RakNet::RakPeerInterface, RakNet::RNS2EventHandler {

public:
    virtual ~RakPeer();
    virtual void Startup(unsigned int, RakNet::SocketDescriptor *, unsigned int, int);
    virtual void InitializeSecurity(char const*, char const*, bool);
    virtual void DisableSecurity();
    virtual void AddToSecurityExceptionList(char const*);
    virtual void RemoveFromSecurityExceptionList(char const*);
    virtual bool IsInSecurityExceptionList(char const*);
    virtual void SetMaximumIncomingConnections(unsigned short);
    virtual void GetMaximumIncomingConnections()const;
    virtual void NumberOfConnections()const;
    virtual void SetIncomingPassword(char const*, int);
    virtual void GetIncomingPassword(char *, int *);
//  virtual void Connect(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
//  virtual void ConnectWithSocket(char const*, unsigned short, char const*, int, RakNet::RakNetSocket2 *, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
//  virtual void Shutdown(unsigned int, unsigned char, PacketPriority); //TODO: incomplete function definition
    virtual bool IsActive()const;
    virtual void GetConnectionList(RakNet::SystemAddress *, unsigned short *)const;
    virtual void GetNextSendReceipt();
    virtual void IncrementNextSendReceipt();
//  virtual void Send(char const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition
    virtual void SendLoopback(char const*, int);
//  virtual void Send(RakNet::BitStream const*, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition
//  virtual void SendList(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int); //TODO: incomplete function definition
    virtual void Receive();
    virtual void DeallocatePacket(RakNet::Packet *);
    virtual void GetMaximumNumberOfPeers()const;
//  virtual void CloseConnection(RakNet::AddressOrGUID, bool, unsigned char, PacketPriority); //TODO: incomplete function definition
    virtual void GetConnectionState(RakNet::AddressOrGUID);
    virtual void CancelConnectionAttempt(RakNet::SystemAddress);
    virtual void GetIndexFromSystemAddress(RakNet::SystemAddress)const;
    virtual void GetSystemAddressFromIndex(unsigned int);
    virtual void GetGUIDFromIndex(unsigned int);
//  virtual void GetSystemList(DataStructures::List<RakNet::SystemAddress> &, DataStructures::List<RakNet::RakNetGUID> &)const; //TODO: incomplete function definition
    virtual void AddToBanList(char const*, unsigned int);
    virtual void RemoveFromBanList(char const*);
    virtual void ClearBanList();
    virtual bool IsBanned(char const*);
    virtual void SetLimitIPConnectionFrequency(bool);
    virtual void Ping(RakNet::SystemAddress);
    virtual void Ping(char const*, unsigned short, bool, unsigned int);
    virtual void SendNatTraversalMessage(RakNet::SystemAddress);
    virtual void GetAveragePing(RakNet::AddressOrGUID);
    virtual void GetLastPing(RakNet::AddressOrGUID)const;
    virtual void GetLowestPing(RakNet::AddressOrGUID)const;
    virtual void SetOccasionalPing(bool);
    virtual void GetClockDifferential(RakNet::AddressOrGUID);
    virtual void SetOfflinePingResponse(char const*, unsigned int);
    virtual void GetOfflinePingResponse(char **, unsigned int *);
    virtual void GetInternalID(RakNet::SystemAddress, int)const;
    virtual void SetInternalID(RakNet::SystemAddress, int);
    virtual void GetExternalID(RakNet::SystemAddress)const;
    virtual void GetMyGUID()const;
    virtual void resetMyGUID();
    virtual void GetMyBoundAddress(int);
    virtual void GetGuidFromSystemAddress(RakNet::SystemAddress)const;
    virtual void GetSystemAddressFromGuid(RakNet::RakNetGUID)const;
    virtual void GetClientPublicKeyFromSystemAddress(RakNet::SystemAddress, char *)const;
    virtual void SetTimeoutTime(unsigned int, RakNet::SystemAddress);
    virtual void GetTimeoutTime(RakNet::SystemAddress);
    virtual void GetMTUSize(RakNet::SystemAddress)const;
    virtual void GetNumberOfAdapters();
    virtual void GetLocalAdapter(unsigned int);
    virtual void GetNumberOfAddresses();
    virtual void GetLocalIP(unsigned int);
    virtual bool IsLocalIP(char const*);
    virtual void AllowConnectionResponseIPMigration(bool);
    virtual void AdvertiseSystem(char const*, unsigned short, char const*, int, unsigned int);
    virtual void SetSplitMessageProgressInterval(int);
    virtual void GetSplitMessageProgressInterval()const;
    virtual void SetUnreliableTimeout(unsigned int);
    virtual void SendTTL(char const*, unsigned short, int, unsigned int);
    virtual void AttachPlugin(RakNet::PluginInterface2 *);
    virtual void DetachPlugin(RakNet::PluginInterface2 *);
    virtual void PushBackPacket(RakNet::Packet *, bool);
    virtual void ChangeSystemAddress(RakNet::RakNetGUID, RakNet::SystemAddress const&);
    virtual void AllocatePacket(unsigned int);
    virtual void GetSocket(RakNet::SystemAddress);
//  virtual void GetSockets(DataStructures::List<RakNet::RakNetSocket2 *> &); //TODO: incomplete function definition
//  virtual void ReleaseSockets(DataStructures::List<RakNet::RakNetSocket2 *> &); //TODO: incomplete function definition
    virtual void WriteOutOfBandHeader(RakNet::BitStream *);
//  virtual void SetUserUpdateThread(void ((RakNet::RakPeerInterface *, void *), , void *); //TODO: incomplete function definition
//  virtual void SetIncomingDatagramEventHandler(bool ((RakNet::RNS2RecvStruct *), ); //TODO: incomplete function definition
    virtual void ApplyNetworkSimulator(float, unsigned short, unsigned short);
    virtual void SetPerConnectionOutgoingBandwidthLimit(unsigned int);
    virtual bool IsNetworkSimulatorActive();
//  virtual void GetStatistics(RakNet::SystemAddress, RakNet::RakNetStatistics *); //TODO: incomplete function definition
//  virtual void GetStatistics(unsigned int, RakNet::RakNetStatistics *); //TODO: incomplete function definition
//  virtual void GetStatisticsList(DataStructures::List<RakNet::SystemAddress> &, DataStructures::List<RakNet::RakNetGUID> &, DataStructures::List<RakNet::RakNetStatistics> &); //TODO: incomplete function definition
    virtual void GetReceiveBufferSize();
    virtual void RunUpdateCycle(RakNet::BitStream &);
    virtual void SendOutOfBand(char const*, unsigned short, char const*, unsigned int, unsigned int);
    virtual void DeallocRNS2RecvStruct(RakNet::RNS2RecvStruct *, char const*, unsigned int);
    virtual void AllocRNS2RecvStruct(char const*, unsigned int);
    virtual void OnRNS2Recv(RakNet::RNS2RecvStruct *);

    void AllocPacket(unsigned int, char const*, unsigned int);
    void AllocPacket(unsigned int, unsigned char *, char const*, unsigned int);
    RakPeer();
    void GenerateGUID();
    void ResetSendReceipt();
    void FillIPList();
    void FillAdapterList();
    void GenerateSeedFromGuid();
    void DerefAllSockets();
    void ClearBufferedCommands();
    void ClearBufferedPackets();
    void ClearSocketQueryOutput();
    void GetRakNetSocketFromUserConnectionSocketIndex(unsigned int)const;
//  void SendConnectionRequest(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); //TODO: incomplete function definition
//  void SendConnectionRequest(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, RakNet::RakNetSocket2 *); //TODO: incomplete function definition
//  void NotifyAndFlagForShutdown(RakNet::SystemAddress, bool, unsigned char, PacketPriority); //TODO: incomplete function definition
    void ClearRequestedConnectionList();
    void ClearRemoteSystemLookup();
    bool IsLoopbackAddress(RakNet::AddressOrGUID const&, bool)const;
//  void SendBuffered(char const*, unsigned int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, unsigned int); //TODO: incomplete function definition
    void GetLoopbackAddress()const;
//  void SendBufferedList(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, unsigned int); //TODO: incomplete function definition
    void ShiftIncomingTimestamp(unsigned char *, RakNet::SystemAddress const&)const;
//  void CallPluginCallbacks(DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::Packet *); //TODO: incomplete function definition
//  void CloseConnectionInternal(RakNet::AddressOrGUID const&, bool, bool, unsigned char, PacketPriority); //TODO: incomplete function definition
    void GetIndexFromSystemAddress(RakNet::SystemAddress, bool)const;
    void GetIndexFromGuid(RakNet::RakNetGUID);
//  void PingInternal(RakNet::SystemAddress, bool, PacketReliability); //TODO: incomplete function definition
    void GetRemoteSystem(RakNet::AddressOrGUID, bool, bool)const;
    void GetClockDifferentialInt(RakNet::RakPeer::RemoteSystemStruct *)const;
    void GetRemoteSystemFromSystemAddress(RakNet::SystemAddress, bool, bool)const;
    void GetSystemIndexFromGuid(RakNet::RakNetGUID)const;
    void GetRemoteSystemIndex(RakNet::SystemAddress const&)const;
    void ValidateRemoteSystemLookup()const;
    void GetRemoteSystemFromGUID(RakNet::RakNetGUID, bool)const;
    void ParseConnectionRequestPacket(RakNet::RakPeer::RemoteSystemStruct *, RakNet::SystemAddress const&, char const*, int);
//  void SendImmediate(char *, unsigned int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, bool, unsigned long, unsigned int); //TODO: incomplete function definition
    void OnConnectionRequest(RakNet::RakPeer::RemoteSystemStruct *, unsigned long);
    void GetNumberOfRemoteInitiatedConnections()const;
//  void AssignSystemAddressToRemoteSystemList(RakNet::SystemAddress, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, RakNet::RakNetSocket2 *, bool *, RakNet::SystemAddress, int, RakNet::RakNetGUID, bool); //TODO: incomplete function definition
    void ReferenceRemoteSystem(RakNet::SystemAddress const&, unsigned int);
    void AddToActiveSystemList(unsigned int);
    void GetBestClockDifferential(RakNet::SystemAddress)const;
    void RemoteSystemLookupHashIndex(RakNet::SystemAddress const&)const;
    void GetRemoteSystem(RakNet::SystemAddress const&)const;
    void DereferenceRemoteSystem(RakNet::SystemAddress const&);
    void RemoveFromActiveSystemList(RakNet::SystemAddress const&);
    void AllowIncomingConnections()const;
    void SetupBufferedPackets();
    void PushBufferedPacket(RakNet::RNS2RecvStruct *);
    void PopBufferedPacket();
    void OnConnectedPong(unsigned long, unsigned long, RakNet::RakPeer::RemoteSystemStruct *);
    void AddPacketToProducer(RakNet::Packet *);
};

}