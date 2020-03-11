#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class SetLastHurtByPacket : Packet {

public:
    virtual ~SetLastHurtByPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetLastHurtByPacket();
//  SetLastHurtByPacket(ActorType); //TODO: incomplete function definition
};
