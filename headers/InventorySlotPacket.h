#pragma once

class InventorySlotPacket : Packet {

    virtual ~InventorySlotPacket();
    virtual ~InventorySlotPacket();
    virtual void getId(void)const;
    virtual void _ZNK19InventorySlotPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
