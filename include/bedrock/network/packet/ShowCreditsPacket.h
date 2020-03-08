#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/BinaryStream"


class ShowCreditsPacket : Packet {

public:
    ShowCreditsPacket::~ShowCreditsPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ShowCreditsPacket(void);
    ShowCreditsPacket(ActorRuntimeID, ShowCreditsPacket::CreditsState);
};
