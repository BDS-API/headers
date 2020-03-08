#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/PlayerListEntry"
#include "../../io/BinaryStream"
#include "../../../mce/UUID"


class PlayerListPacket : Packet {

public:
    virtual PlayerListPacket::~PlayerListPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerListPacket(void);
    PlayerListPacket(mce::UUID const&);
    void add(PlayerListEntry const&);
};
