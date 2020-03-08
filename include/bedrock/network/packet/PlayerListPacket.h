#pragma once

#include "../../io/BinaryStream"
#include "../../../mce/UUID"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/PlayerListEntry"


class PlayerListPacket : Packet {

public:
    virtual PlayerListPacket::~PlayerListPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerListPacket(void);
    PlayerListPacket(mce::UUID const&);
    void add(PlayerListEntry const&);
};
