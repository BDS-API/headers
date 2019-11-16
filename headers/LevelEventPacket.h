#pragma once

class LevelEventPacket : Packet {

    virtual ~LevelEventPacket();
    virtual ~LevelEventPacket();
    virtual void getId(void)const;
    virtual void _ZNK16LevelEventPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
