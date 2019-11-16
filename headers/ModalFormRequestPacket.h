#pragma once

class ModalFormRequestPacket : Packet {

    virtual ~ModalFormRequestPacket();
    virtual ~ModalFormRequestPacket();
    virtual void getId(void)const;
    virtual void _ZNK22ModalFormRequestPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
