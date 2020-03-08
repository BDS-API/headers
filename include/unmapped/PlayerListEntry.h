#pragma once

#include "../mce/UUID"
#include "../bedrock/io/ReadOnlyBinaryStream"
#include "../bedrock/io/BinaryStream"
#include "../bedrock/actor/Player"


class PlayerListEntry {

public:

    PlayerListEntry(Player const&);
    PlayerListEntry(void);
    PlayerListEntry(mce::UUID);
    void readRemove(ReadOnlyBinaryStream &);
    void writeRemove(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
    void write(BinaryStream &)const;
    PlayerListEntry(PlayerListEntry const&);
};
