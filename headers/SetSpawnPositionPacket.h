#pragma once

class SetSpawnPositionPacket : Packet {

    virtual void SetSpawnPositionPacket::~SetSpawnPositionPacket();
    virtual void SetSpawnPositionPacket::~SetSpawnPositionPacket();
    virtual void getId(void)const;
    virtual void _ZNK22SetSpawnPositionPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
