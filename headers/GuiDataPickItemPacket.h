#pragma once

class GuiDataPickItemPacket : Packet {

    virtual ~GuiDataPickItemPacket();
    virtual ~GuiDataPickItemPacket();
    virtual void getId(void)const;
    virtual void _ZNK21GuiDataPickItemPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
