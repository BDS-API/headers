#pragma once

#include <string>
#include "Packet.h"


class PlayerListPacket : public Packet {

public:
    virtual ~PlayerListPacket(); // _ZN16PlayerListPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK16PlayerListPacket5getIdEv
    virtual std::string getName()const; // _ZNK16PlayerListPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK16PlayerListPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN16PlayerListPacket4readER20ReadOnlyBinaryStream
    PlayerListPacket(); // _ZN16PlayerListPacketC2Ev
    PlayerListPacket(mce::UUID const&); // _ZN16PlayerListPacketC2ERKN3mce4UUIDE
    void add(PlayerListEntry const&); // _ZN16PlayerListPacket3addERK15PlayerListEntry
};
