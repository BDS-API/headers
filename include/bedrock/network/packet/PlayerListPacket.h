#pragma once

#include <string>
#include "Packet.h"


class PlayerListPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    ~PlayerListPacket();
    PlayerListPacket(mce::UUID const&);
    PlayerListPacket();
    void add(PlayerListEntry const&);
};
