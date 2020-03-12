#pragma once

#include <string>
#include "Packet.h"


class SetLastHurtByPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~SetLastHurtByPacket();
//  SetLastHurtByPacket(ActorType); //TODO: incomplete function definition
    SetLastHurtByPacket();
};
