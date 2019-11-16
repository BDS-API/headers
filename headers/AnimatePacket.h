#pragma once

class AnimatePacket : Packet {

    virtual ~AnimatePacket();
    virtual ~AnimatePacket();
    virtual void getId(void)const;
    virtual void _ZNK13AnimatePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
