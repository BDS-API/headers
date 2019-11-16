#pragma once

class ContainerClosePacket : Packet {

    virtual void ContainerClosePacket::~ContainerClosePacket();
    virtual void ContainerClosePacket::~ContainerClosePacket();
    virtual void getId(void)const;
    virtual void _ZNK20ContainerClosePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
