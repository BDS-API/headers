#pragma once

class InventoryTransactionPacket : Packet {

    virtual void InventoryTransactionPacket::~InventoryTransactionPacket();
    virtual void InventoryTransactionPacket::~InventoryTransactionPacket();
    virtual void getId(void)const;
    virtual void _ZNK26InventoryTransactionPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
