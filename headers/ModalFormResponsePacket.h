#pragma once

class ModalFormResponsePacket : Packet {

    virtual ~ModalFormResponsePacket();
    virtual ~ModalFormResponsePacket();
    virtual void getId(void)const;
    virtual void _ZNK23ModalFormResponsePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
