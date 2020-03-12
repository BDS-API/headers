#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class SetLastHurtByPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~SetLastHurtByPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    SetLastHurtByPacket();
//  SetLastHurtByPacket(ActorType); //TODO: incomplete function definition
};
