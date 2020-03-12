#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/PlayerListEntry.h"
#include "../../../mce/UUID.h"
#include "Packet.h"


class PlayerListPacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~PlayerListPacket();
    virtual std::string getName()const;
    PlayerListPacket(mce::UUID const&);
    PlayerListPacket();
    void add(PlayerListEntry const&);
};
