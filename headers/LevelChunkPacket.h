#pragma once

class LevelChunkPacket : Packet {

    virtual ~LevelChunkPacket();
    virtual ~LevelChunkPacket();
    virtual void getId(void)const;
    virtual void _ZNK16LevelChunkPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
