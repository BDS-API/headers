#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include <string>


class ShowCreditsPacket : Packet {

public:
    virtual ~ShowCreditsPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ShowCreditsPacket();
//  ShowCreditsPacket(ActorRuntimeID, ShowCreditsPacket::CreditsState); //TODO: incomplete function definition
};
