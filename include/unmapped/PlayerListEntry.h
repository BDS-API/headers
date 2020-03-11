#pragma once

#include "../mce/UUID.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/io/BinaryStream.h"
#include "./PlayerListEntry.h"


class PlayerListEntry {

public:

    PlayerListEntry(Player const&);
    PlayerListEntry();
    PlayerListEntry(mce::UUID);
    ~PlayerListEntry();
    void readRemove(ReadOnlyBinaryStream &);
    void writeRemove(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
    void write(BinaryStream &)const;
    PlayerListEntry(PlayerListEntry const&);
};
