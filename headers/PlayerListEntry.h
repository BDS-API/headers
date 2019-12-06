#pragma once

class PlayerListEntry {

public:

    void PlayerListEntry(Player const&);
    void PlayerListEntry(void);
    void PlayerListEntry(mce::UUID);
    void readRemove(ReadOnlyBinaryStream &);
    void writeRemove(BinaryStream &)const;
    void read(ReadOnlyBinaryStream &);
    void write(BinaryStream &)const;
    void PlayerListEntry(PlayerListEntry const&);
};
