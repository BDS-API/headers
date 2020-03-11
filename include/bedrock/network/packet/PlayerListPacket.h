#pragma once

#include "../../../mce/UUID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../../unmapped/PlayerListEntry.h"
#include <string>


class PlayerListPacket : Packet {

public:
    virtual ~PlayerListPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerListPacket();
    PlayerListPacket(mce::UUID const&);
    void add(PlayerListEntry const&);
};
