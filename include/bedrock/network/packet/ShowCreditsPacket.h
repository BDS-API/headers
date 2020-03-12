#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class ShowCreditsPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~ShowCreditsPacket();
    virtual std::string getName()const;
//  ShowCreditsPacket(ActorRuntimeID, ShowCreditsPacket::CreditsState); //TODO: incomplete function definition
    ShowCreditsPacket();
};
