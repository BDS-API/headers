#pragma once

#include <string>
#include "Packet.h"


class SubClientLoginPacket : public Packet {

public:
    virtual ~SubClientLoginPacket(); // _ZN20SubClientLoginPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK20SubClientLoginPacket5getIdEv
    virtual std::string getName()const; // _ZNK20SubClientLoginPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK20SubClientLoginPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN20SubClientLoginPacket4readER20ReadOnlyBinaryStream
    virtual void disallowBatching()const; // _ZNK20SubClientLoginPacket16disallowBatchingEv
    SubClientLoginPacket(); // _ZN20SubClientLoginPacketC2Ev
    SubClientLoginPacket(SubClientConnectionRequest const&); // _ZN20SubClientLoginPacketC2ERK26SubClientConnectionRequest
    SubClientLoginPacket(SubClientLoginPacket &&); // _ZN20SubClientLoginPacketC2EOS_
};
