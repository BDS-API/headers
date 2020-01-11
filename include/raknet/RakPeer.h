#pragma once

using namespace RakNet;

class RakPeer : RakNet::RakPeerInterface, RakNet::RNS2EventHandler {

public:
    virtual void RakNet::RakPeer::~RakPeer();
    virtual void Startup(unsigned int, RakNet::SocketDescriptor *, unsigned int, int);
    virtual void InitializeSecurity(char const*, char const*, bool);
    virtual void DisableSecurity(void);
    virtual void AddToSecurityExceptionList(char const*);
    virtual void RemoveFromSecurityExceptionList(char const*);
    virtual void IsInSecurityExceptionList(char const*);
    virtual void SetMaximumIncomingConnections(unsigned short);
    virtual void GetMaximumIncomingConnections(void)const;
    virtual void NumberOfConnections(void)const;
    virtual void SetIncomingPassword(char const*, int);
    virtual void GetIncomingPassword(char *, int *);
    virtual void Connect(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int);
    virtual void ConnectWithSocket(char const*, unsigned short, char const*, int, RakNet::RakNetSocket2 *, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int);
    virtual void Shutdown(unsigned int, unsigned char, PacketPriority);
    virtual void IsActive(void)const;
    virtual void GetConnectionList(RakNet::SystemAddress *, unsigned short *)const;
    virtual void GetNextSendReceipt(void);
    virtual void IncrementNextSendReceipt(void);
    virtual void Send(char const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int);
    virtual void SendLoopback(char const*, int);
    virtual void Send(RakNet::BitStream const*, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int);
    virtual void SendList(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, unsigned int);
    virtual void Receive(void);
    virtual void DeallocatePacket(RakNet::Packet *);
    virtual void GetMaximumNumberOfPeers(void)const;
    virtual void CloseConnection(RakNet::AddressOrGUID, bool, unsigned char, PacketPriority);
    virtual void GetConnectionState(RakNet::AddressOrGUID);
    virtual void CancelConnectionAttempt(RakNet::SystemAddress);
    virtual void GetIndexFromSystemAddress(RakNet::SystemAddress)const;
    virtual void GetSystemAddressFromIndex(unsigned int);
    virtual void GetGUIDFromIndex(unsigned int);
    virtual void GetSystemList(DataStructures::List<RakNet::SystemAddress> &, DataStructures::List<RakNet::RakNetGUID> &)const;
    virtual void AddToBanList(char const*, unsigned int);
    virtual void RemoveFromBanList(char const*);
    virtual void ClearBanList(void);
    virtual void IsBanned(char const*);
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
    virtual void GetMyGUID(void)const;
    virtual void resetMyGUID(void);
    virtual void GetMyBoundAddress(int);
    virtual void GetGuidFromSystemAddress(RakNet::SystemAddress)const;
    virtual void GetSystemAddressFromGuid(RakNet::RakNetGUID)const;
    virtual void GetClientPublicKeyFromSystemAddress(RakNet::SystemAddress, char *)const;
    virtual void SetTimeoutTime(unsigned int, RakNet::SystemAddress);
    virtual void GetTimeoutTime(RakNet::SystemAddress);
    virtual void GetMTUSize(RakNet::SystemAddress)const;
    virtual void GetNumberOfAdapters(void);
    virtual void GetLocalAdapter(unsigned int);
    virtual void GetNumberOfAddresses(void);
    virtual void GetLocalIP(unsigned int);
    virtual void IsLocalIP(char const*);
    virtual void AllowConnectionResponseIPMigration(bool);
    virtual void AdvertiseSystem(char const*, unsigned short, char const*, int, unsigned int);
    virtual void SetSplitMessageProgressInterval(int);
    virtual void GetSplitMessageProgressInterval(void)const;
    virtual void SetUnreliableTimeout(unsigned int);
    virtual void SendTTL(char const*, unsigned short, int, unsigned int);
    virtual void AttachPlugin(RakNet::PluginInterface2 *);
    virtual void DetachPlugin(RakNet::PluginInterface2 *);
    virtual void PushBackPacket(RakNet::Packet *, bool);
    virtual void ChangeSystemAddress(RakNet::RakNetGUID, RakNet::SystemAddress const&);
    virtual void AllocatePacket(unsigned int);
    virtual void GetSocket(RakNet::SystemAddress);
    virtual void GetSockets(DataStructures::List<RakNet::RakNetSocket2 *> &);
    virtual void ReleaseSockets(DataStructures::List<RakNet::RakNetSocket2 *> &);
    virtual void WriteOutOfBandHeader(RakNet::BitStream *);
    virtual void SetUserUpdateThread(void (*)(RakNet::RakPeerInterface *, void *), void *);
    virtual void SetIncomingDatagramEventHandler(bool (*)(RakNet::RNS2RecvStruct *));
    virtual void ApplyNetworkSimulator(float, unsigned short, unsigned short);
    virtual void SetPerConnectionOutgoingBandwidthLimit(unsigned int);
    virtual void IsNetworkSimulatorActive(void);
    virtual void GetStatistics(RakNet::SystemAddress, RakNet::RakNetStatistics *);
    virtual void GetStatistics(unsigned int, RakNet::RakNetStatistics *);
    virtual void GetStatisticsList(DataStructures::List<RakNet::SystemAddress> &, DataStructures::List<RakNet::RakNetGUID> &, DataStructures::List<RakNet::RakNetStatistics> &);
    virtual void GetReceiveBufferSize(void);
    virtual void RunUpdateCycle(RakNet::BitStream &);
    virtual void SendOutOfBand(char const*, unsigned short, char const*, unsigned int, unsigned int);
    virtual void DeallocRNS2RecvStruct(RakNet::RNS2RecvStruct *, char const*, unsigned int);
    virtual void AllocRNS2RecvStruct(char const*, unsigned int);
    virtual void OnRNS2Recv(RakNet::RNS2RecvStruct *);

    void AllocPacket(unsigned int, char const*, unsigned int);
    void AllocPacket(unsigned int, unsigned char *, char const*, unsigned int);
    RakPeer(void);
    void GenerateGUID(void);
    void ResetSendReceipt(void);
    void FillIPList(void);
    void FillAdapterList(void);
    void GenerateSeedFromGuid(void);
    void DerefAllSockets(void);
    void ClearBufferedCommands(void);
    void ClearBufferedPackets(void);
    void ClearSocketQueryOutput(void);
    void GetRakNetSocketFromUserConnectionSocketIndex(unsigned int)const;
    void SendConnectionRequest(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    void SendConnectionRequest(char const*, unsigned short, char const*, int, RakNet::PublicKey *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, RakNet::RakNetSocket2 *);
    void NotifyAndFlagForShutdown(RakNet::SystemAddress, bool, unsigned char, PacketPriority);
    void ClearRequestedConnectionList(void);
    void ClearRemoteSystemLookup(void);
    void IsLoopbackAddress(RakNet::AddressOrGUID const&, bool)const;
    void SendBuffered(char const*, unsigned int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, unsigned int);
    void GetLoopbackAddress(void)const;
    void SendBufferedList(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, unsigned int);
    void ShiftIncomingTimestamp(unsigned char *, RakNet::SystemAddress const&)const;
    void CallPluginCallbacks(DataStructures::List<RakNet::PluginInterface2 *> &, RakNet::Packet *);
    void CloseConnectionInternal(RakNet::AddressOrGUID const&, bool, bool, unsigned char, PacketPriority);
    void GetIndexFromSystemAddress(RakNet::SystemAddress, bool)const;
    void GetIndexFromGuid(RakNet::RakNetGUID);
    void PingInternal(RakNet::SystemAddress, bool, PacketReliability);
    void GetRemoteSystem(RakNet::AddressOrGUID, bool, bool)const;
    void GetClockDifferentialInt(RakNet::RakPeer::RemoteSystemStruct *)const;
    void GetRemoteSystemFromSystemAddress(RakNet::SystemAddress, bool, bool)const;
    void GetSystemIndexFromGuid(RakNet::RakNetGUID)const;
    void GetRemoteSystemIndex(RakNet::SystemAddress const&)const;
    void ValidateRemoteSystemLookup(void)const;
    void GetRemoteSystemFromGUID(RakNet::RakNetGUID, bool)const;
    void ParseConnectionRequestPacket(RakNet::RakPeer::RemoteSystemStruct *, RakNet::SystemAddress const&, char const*, int);
    void SendImmediate(char *, unsigned int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool, bool, unsigned long, unsigned int);
    void OnConnectionRequest(RakNet::RakPeer::RemoteSystemStruct *, unsigned long);
    void GetNumberOfRemoteInitiatedConnections(void)const;
    void AssignSystemAddressToRemoteSystemList(RakNet::SystemAddress, RakNet::RakPeer::RemoteSystemStruct::ConnectMode, RakNet::RakNetSocket2 *, bool *, RakNet::SystemAddress, int, RakNet::RakNetGUID, bool);
    void ReferenceRemoteSystem(RakNet::SystemAddress const&, unsigned int);
    void AddToActiveSystemList(unsigned int);
    void GetBestClockDifferential(RakNet::SystemAddress)const;
    void RemoteSystemLookupHashIndex(RakNet::SystemAddress const&)const;
    void GetRemoteSystem(RakNet::SystemAddress const&)const;
    void DereferenceRemoteSystem(RakNet::SystemAddress const&);
    void RemoveFromActiveSystemList(RakNet::SystemAddress const&);
    void AllowIncomingConnections(void)const;
    void SetupBufferedPackets(void);
    void PushBufferedPacket(RakNet::RNS2RecvStruct *);
    void PopBufferedPacket(void);
    void OnConnectedPong(unsigned long, unsigned long, RakNet::RakPeer::RemoteSystemStruct *);
    void AddPacketToProducer(RakNet::Packet *);
};