#pragma once

#include <string>
#include "Packet.h"
#include "../../../mce/UUID.h"


class PlayerSkinPacket : Packet {

public:
    ~PlayerSkinPacket(); // _ZN16PlayerSkinPacketD2Ev
    virtual void getId()const; // _ZNK16PlayerSkinPacket5getIdEv
    virtual std::string getName()const; // _ZNK16PlayerSkinPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK16PlayerSkinPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN16PlayerSkinPacket4readER20ReadOnlyBinaryStream
    PlayerSkinPacket(); // _ZN16PlayerSkinPacketC2Ev
    PlayerSkinPacket(mce::UUID, SerializedSkin const&, std::string const&, std::string const&); // _ZN16PlayerSkinPacketC2EN3mce4UUIDERK14SerializedSkinRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESC_
};
