#pragma once

#include <functional>
#include "PacketSender.h"
#include <vector>


class LoopbackPacketSender : PacketSender {

public:
    ~LoopbackPacketSender(); // _ZN20LoopbackPacketSenderD2Ev
    virtual void send(Packet &); // _ZN20LoopbackPacketSender4sendER6Packet
    virtual void sendToServer(Packet &); // _ZN20LoopbackPacketSender12sendToServerER6Packet
    virtual void sendToClient(NetworkIdentifier const&, Packet const&, unsigned char); // _ZN20LoopbackPacketSender12sendToClientERK17NetworkIdentifierRK6Packeth
    virtual void sendToClients(std::vector<NetworkIdentifierWithSubId> const&, Packet const&); // _ZN20LoopbackPacketSender13sendToClientsERKSt6vectorI26NetworkIdentifierWithSubIdSaIS1_EERK6Packet
    virtual void sendBroadcast(Packet const&); // _ZN20LoopbackPacketSender13sendBroadcastERK6Packet
    virtual void sendBroadcast(NetworkIdentifier const&, unsigned char, Packet const&); // _ZN20LoopbackPacketSender13sendBroadcastERK17NetworkIdentifierhRK6Packet
    virtual void flush(NetworkIdentifier const&, std::function<void (void)> &&); // _ZN20LoopbackPacketSender5flushERK17NetworkIdentifierOSt8functionIFvvEE
    LoopbackPacketSender(unsigned char, NetworkHandler &); // _ZN20LoopbackPacketSenderC2EhR14NetworkHandler
    void addLoopbackCallback(NetEventCallback &); // _ZN20LoopbackPacketSender19addLoopbackCallbackER16NetEventCallback
    void removeLoopbackCallback(NetEventCallback &); // _ZN20LoopbackPacketSender22removeLoopbackCallbackER16NetEventCallback
    void setUserList(std::vector<std::unique_ptr<Player>> const*); // _ZN20LoopbackPacketSender11setUserListEPKSt6vectorISt10unique_ptrI6PlayerSt14default_deleteIS2_EESaIS5_EE
};
