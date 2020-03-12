#pragma once

#include "../mce/UUID.h"


class PlayerListEntry {

public:
    PlayerListEntry(PlayerListEntry const&);
    void readRemove(ReadOnlyBinaryStream &);
    void writeRemove(BinaryStream &)const;
    PlayerListEntry(Player const&);
    PlayerListEntry(mce::UUID);
    void read(ReadOnlyBinaryStream &);
    void write(BinaryStream &)const;
    ~PlayerListEntry();
    PlayerListEntry();
};
