#pragma once

class LevelEventGenericPacket : Packet {

    virtual ~LevelEventGenericPacket();
    virtual ~LevelEventGenericPacket();
    virtual void getId(void)const;
    virtual void _ZNK23LevelEventGenericPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
