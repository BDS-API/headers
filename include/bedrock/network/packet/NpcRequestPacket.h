#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class NpcRequestPacket : Packet {

public:
    ~NpcRequestPacket(); // _ZN16NpcRequestPacketD2Ev
    virtual void getId()const; // _ZNK16NpcRequestPacket5getIdEv
    virtual std::string getName()const; // _ZNK16NpcRequestPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK16NpcRequestPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN16NpcRequestPacket4readER20ReadOnlyBinaryStream
    NpcRequestPacket(); // _ZN16NpcRequestPacketC2Ev
//  NpcRequestPacket(ActorRuntimeID, NpcRequestPacket::RequestType, std::string, unsigned char); //TODO: incomplete function definition // _ZN16NpcRequestPacketC2E14ActorRuntimeIDNS_11RequestTypeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEh
    NpcRequestPacket(ActorRuntimeID); // _ZN16NpcRequestPacketC2E14ActorRuntimeID
    NpcRequestPacket(ActorRuntimeID, int); // _ZN16NpcRequestPacketC2E14ActorRuntimeIDi
    NpcRequestPacket(ActorRuntimeID, std::string const&); // _ZN16NpcRequestPacketC2E14ActorRuntimeIDRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void requestSetName(ActorRuntimeID, std::string); // _ZN16NpcRequestPacket14requestSetNameE14ActorRuntimeIDNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void requestSetSkin(ActorRuntimeID, int); // _ZN16NpcRequestPacket14requestSetSkinE14ActorRuntimeIDi
    void requestSetInteractText(ActorRuntimeID, std::string); // _ZN16NpcRequestPacket22requestSetInteractTextE14ActorRuntimeIDNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getNpcName()const; // _ZNK16NpcRequestPacket10getNpcNameB5cxx11Ev
    void getSkin()const; // _ZNK16NpcRequestPacket7getSkinEv
    std::string getInteractText()const; // _ZNK16NpcRequestPacket15getInteractTextB5cxx11Ev
};
