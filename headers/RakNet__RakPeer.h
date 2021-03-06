#pragma once

class RakNet::RakPeer : RakNet::RakPeerInterface, RakNet::RNS2EventHandler {

    virtual ~RakPeer();
    virtual ~RakPeer();
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
    virtual void ;
    virtual void `non-virtual thunk to'RakNet::RakPeer::~RakPeer();
    virtual void `non-virtual thunk to'RakNet::RakPeer::~RakPeer();
    virtual void `non-virtual thunk to'RakNet::RakPeer::OnRNS2Recv(RakNet::RNS2RecvStruct *);
    virtual void `non-virtual thunk to'RakNet::RakPeer::DeallocRNS2RecvStruct(RakNet::RNS2RecvStruct *, char const*, unsigned int);
    virtual void `non-virtual thunk to'RakNet::RakPeer::AllocRNS2RecvStruct(char const*, unsigned int);
}
