#pragma once

#include "Packet.h"


class EntityClientPacket : public Packet {

public:
    virtual ~EntityClientPacket(); // _ZN18EntityClientPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void write(BinaryStream &)const; // _ZNK18EntityClientPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN18EntityClientPacket4readER20ReadOnlyBinaryStream
    EntityClientPacket(); // _ZN18EntityClientPacketC2Ev
    EntityClientPacket(NetworkComponent &); // _ZN18EntityClientPacketC2ER16NetworkComponent
    void getEntityNetId()const; // _ZNK18EntityClientPacket14getEntityNetIdEv
};
