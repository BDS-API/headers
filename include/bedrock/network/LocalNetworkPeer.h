#pragma once

#include "NetworkPeer.h"
#include <memory>
#include <string>


class LocalNetworkPeer : NetworkPeer {

public:
    ~LocalNetworkPeer(); // _ZN16LocalNetworkPeerD2Ev
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition // _ZN16LocalNetworkPeer10sendPacketERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN11NetworkPeer11ReliabilityEit15Compressibility
    virtual void receivePacket(std::string &); // _ZN16LocalNetworkPeer13receivePacketERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getNetworkStatus(); // _ZN16LocalNetworkPeer16getNetworkStatusEv
    LocalNetworkPeer(); // _ZN16LocalNetworkPeerC2Ev
    void setOtherPeer(std::weak_ptr<LocalNetworkPeer>); // _ZN16LocalNetworkPeer12setOtherPeerESt8weak_ptrIS_E
    void addIncomingData(std::string); // _ZN16LocalNetworkPeer15addIncomingDataENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
