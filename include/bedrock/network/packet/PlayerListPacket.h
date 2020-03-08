#pragma once

#include "../../../mce/UUID"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/PlayerListEntry"
#include "../../io/BinaryStream"


class PlayerListPacket : Packet {

public:
    PlayerListPacket::~PlayerListPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerListPacket(void);
    PlayerListPacket(mce::UUID const&);
    void add(PlayerListEntry const&);
};
