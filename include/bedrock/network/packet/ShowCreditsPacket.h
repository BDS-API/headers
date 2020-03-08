#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/ActorRuntimeID"


class ShowCreditsPacket : Packet {

public:
    virtual ShowCreditsPacket::~ShowCreditsPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ShowCreditsPacket(void);
    ShowCreditsPacket(ActorRuntimeID, ShowCreditsPacket::CreditsState);
};
