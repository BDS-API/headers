#pragma once

class InventorySlotPacket : Packet {

    virtual void InventorySlot~InventorySlotPacket();
    virtual void InventorySlot~InventorySlotPacket();
    virtual void InventorySlotgetId(void)const;
    virtual void _ZNK19InventorySlotPacket7getNameB5cxx11Ev;
    virtual void InventorySlotwrite(BinaryStream &)const;
    virtual void InventorySlotread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
