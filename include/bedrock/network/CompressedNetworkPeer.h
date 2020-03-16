#pragma once

#include <memory>
#include <string>
#include "NetworkPeer.h"


class CompressedNetworkPeer : public NetworkPeer {

public:
    virtual ~CompressedNetworkPeer(); // _ZN21CompressedNetworkPeerD2Ev
    virtual void __fake_function0(); // fake
    virtual void sendPacket__incomplete0(std::string const&, long, int, unsigned short, long); //TODO: incomplete function definition // _ZN21CompressedNetworkPeer10sendPacketERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN11NetworkPeer11ReliabilityEit15Compressibility
    virtual void receivePacket(std::string &); // _ZN21CompressedNetworkPeer13receivePacketERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getNetworkStatus(); // _ZN21CompressedNetworkPeer16getNetworkStatusEv
    CompressedNetworkPeer(std::shared_ptr<NetworkPeer>); // _ZN21CompressedNetworkPeerC2ESt10shared_ptrI11NetworkPeerE
};
