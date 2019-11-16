#pragma once

class ItemUseInventoryTransaction : ComplexInventoryTransaction {

    virtual ~ItemUseInventoryTransaction();
    virtual ~ItemUseInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;
}
