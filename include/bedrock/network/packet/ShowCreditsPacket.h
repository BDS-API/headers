#pragma once

#include "../../io/BinaryStream.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class ShowCreditsPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~ShowCreditsPacket();
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
//  ShowCreditsPacket(ActorRuntimeID, ShowCreditsPacket::CreditsState); //TODO: incomplete function definition
    ShowCreditsPacket();
};
