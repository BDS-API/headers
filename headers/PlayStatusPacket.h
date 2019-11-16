#pragma once

class PlayStatusPacket : Packet {

    virtual ~PlayStatusPacket();
    virtual ~PlayStatusPacket();
    virtual void getId(void)const;
    virtual void _ZNK16PlayStatusPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
