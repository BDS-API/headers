#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class EmotePacket : Packet {

public:
    ~EmotePacket(); // _ZN11EmotePacketD2Ev
    virtual void getId()const; // _ZNK11EmotePacket5getIdEv
    virtual std::string getName()const; // _ZNK11EmotePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK11EmotePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN11EmotePacket4readER20ReadOnlyBinaryStream
    EmotePacket(EmotePacket const&); // _ZN11EmotePacketC2ERKS_
    EmotePacket(); // _ZN11EmotePacketC2Ev
    EmotePacket(ActorRuntimeID, std::string const&, unsigned char); // _ZN11EmotePacketC2E14ActorRuntimeIDRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEh
    void requestEmote(ActorRuntimeID, std::string const&); // _ZN11EmotePacket12requestEmoteE14ActorRuntimeIDRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setServerSide(); // _ZN11EmotePacket13setServerSideEv
    bool isServerSide()const; // _ZNK11EmotePacket12isServerSideEv
};
