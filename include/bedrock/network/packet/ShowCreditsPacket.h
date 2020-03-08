#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"


class ShowCreditsPacket : Packet {

public:
    virtual ShowCreditsPacket::~ShowCreditsPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ShowCreditsPacket(void);
    ShowCreditsPacket(ActorRuntimeID, ShowCreditsPacket::CreditsState);
};
