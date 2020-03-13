#pragma once

#include "../mce/UUID.h"


class PlayerListEntry {

public:
    PlayerListEntry(Player const&); // _ZN15PlayerListEntryC2ERK6Player
    PlayerListEntry(); // _ZN15PlayerListEntryC2Ev
    PlayerListEntry(mce::UUID); // _ZN15PlayerListEntryC2EN3mce4UUIDE
    ~PlayerListEntry(); // _ZN15PlayerListEntryD2Ev
    void readRemove(ReadOnlyBinaryStream &); // _ZN15PlayerListEntry10readRemoveER20ReadOnlyBinaryStream
    void writeRemove(BinaryStream &)const; // _ZNK15PlayerListEntry11writeRemoveER12BinaryStream
    void read(ReadOnlyBinaryStream &); // _ZN15PlayerListEntry4readER20ReadOnlyBinaryStream
    void write(BinaryStream &)const; // _ZNK15PlayerListEntry5writeER12BinaryStream
    PlayerListEntry(PlayerListEntry const&); // _ZN15PlayerListEntryC2ERKS_
};
