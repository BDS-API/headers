#pragma once

#include <string>
#include "Packet.h"


class SetActorLinkPacket : Packet {

public:
    ~SetActorLinkPacket(); // _ZN18SetActorLinkPacketD2Ev
    virtual void getId()const; // _ZNK18SetActorLinkPacket5getIdEv
    virtual std::string getName()const; // _ZNK18SetActorLinkPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK18SetActorLinkPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN18SetActorLinkPacket4readER20ReadOnlyBinaryStream
    SetActorLinkPacket(); // _ZN18SetActorLinkPacketC2Ev
    SetActorLinkPacket(ActorLink const&); // _ZN18SetActorLinkPacketC2ERK9ActorLink
};
