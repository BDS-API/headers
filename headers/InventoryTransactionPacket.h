#pragma once

class InventoryTransactionPacket : Packet {

public:
    virtual ~InventoryTransactionPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void InventoryTransactionPacket(void);
    void InventoryTransactionPacket(std::unique_ptr<ComplexInventoryTransaction, std::default_delete<ComplexInventoryTransaction>>);
};
