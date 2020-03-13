#pragma once

#include "NetworkPeer.h"
#include <memory>
#include <functional>
#include <string>


class BatchedNetworkPeer : NetworkPeer {

public:
    class DataCallback;

    ~BatchedNetworkPeer(); // _ZN18BatchedNetworkPeerD2Ev
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition // _ZN18BatchedNetworkPeer10sendPacketERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN11NetworkPeer11ReliabilityEit15Compressibility
    virtual void receivePacket(std::string &); // _ZN18BatchedNetworkPeer13receivePacketERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getNetworkStatus(); // _ZN18BatchedNetworkPeer16getNetworkStatusEv
    virtual void update(); // _ZN18BatchedNetworkPeer6updateEv
    virtual void flush(std::function<void (void)> &&); // _ZN18BatchedNetworkPeer5flushEOSt8functionIFvvEE
    BatchedNetworkPeer(std::shared_ptr<NetworkPeer>, Scheduler &); // _ZN18BatchedNetworkPeerC2ESt10shared_ptrI11NetworkPeerER9Scheduler
    void setAsyncEnabled(bool); // _ZN18BatchedNetworkPeer15setAsyncEnabledEb
    void getCompressibleState(unsigned long)const; // _ZNK18BatchedNetworkPeer20getCompressibleStateEm
    void _startSendTask(); // _ZN18BatchedNetworkPeer14_startSendTaskEv
    class DataCallback {

    public:
        ~DataCallback(); // _ZN18BatchedNetworkPeer12DataCallbackD2Ev
        DataCallback(BatchedNetworkPeer::DataCallback &&); // _ZN18BatchedNetworkPeer12DataCallbackC2EOS0_
        DataCallback(); // _ZN18BatchedNetworkPeer12DataCallbackC2Ev
    };
};
