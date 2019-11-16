#pragma once

class EmotePacket : Packet {

    virtual ~EmotePacket();
    virtual ~EmotePacket();
    virtual void getId(void)const;
    virtual void _ZNK11EmotePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
