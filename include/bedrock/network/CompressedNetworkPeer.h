#pragma once

#include "NetworkPeer.h"
#include <memory>
#include <string>


class CompressedNetworkPeer : NetworkPeer {

public:
    ~CompressedNetworkPeer(); // _ZN21CompressedNetworkPeerD2Ev
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition // _ZN21CompressedNetworkPeer10sendPacketERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN11NetworkPeer11ReliabilityEit15Compressibility
    virtual void receivePacket(std::string &); // _ZN21CompressedNetworkPeer13receivePacketERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getNetworkStatus(); // _ZN21CompressedNetworkPeer16getNetworkStatusEv
    CompressedNetworkPeer(std::shared_ptr<NetworkPeer>); // _ZN21CompressedNetworkPeerC2ESt10shared_ptrI11NetworkPeerE
};
