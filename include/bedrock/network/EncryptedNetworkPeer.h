#pragma once

#include <memory>
#include <string>
#include "NetworkPeer.h"


class EncryptedNetworkPeer : public NetworkPeer {

public:
    virtual ~EncryptedNetworkPeer(); // _ZN20EncryptedNetworkPeerD2Ev
    virtual void __fake_function0(); // fake
    virtual void sendPacket__incomplete0(std::string const&, long, int, unsigned short, long); //TODO: incomplete function definition // _ZN20EncryptedNetworkPeer10sendPacketERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN11NetworkPeer11ReliabilityEit15Compressibility
    virtual void receivePacket(std::string &); // _ZN20EncryptedNetworkPeer13receivePacketERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getNetworkStatus(); // _ZN20EncryptedNetworkPeer16getNetworkStatusEv
    EncryptedNetworkPeer(std::shared_ptr<NetworkPeer>); // _ZN20EncryptedNetworkPeerC2ESt10shared_ptrI11NetworkPeerE
    void enableEncryption(std::string const&); // _ZN20EncryptedNetworkPeer16enableEncryptionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isEncrypted()const; // _ZNK20EncryptedNetworkPeer11isEncryptedEv
};
