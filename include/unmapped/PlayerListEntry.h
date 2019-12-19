#pragma once

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
