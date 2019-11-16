#pragma once

class ContainerSetDataPacket : Packet {

    virtual ~ContainerSetDataPacket();
    virtual ~ContainerSetDataPacket();
    virtual void getId(void)const;
    virtual void _ZNK22ContainerSetDataPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
