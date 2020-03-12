#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/io/BinaryStream.h"
#include "../mce/UUID.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"


class PlayerListEntry {

public:
    void read(ReadOnlyBinaryStream &);
    PlayerListEntry(PlayerListEntry const&);
    PlayerListEntry(Player const&);
    ~PlayerListEntry();
    void readRemove(ReadOnlyBinaryStream &);
    void write(BinaryStream &)const;
    void writeRemove(BinaryStream &)const;
    PlayerListEntry();
    PlayerListEntry(mce::UUID);
};
