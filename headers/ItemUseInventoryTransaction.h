#pragma once

class ItemUseInventoryTransaction : ComplexInventoryTransaction {

    virtual void ~ItemUseInventoryTransaction();
    virtual void ~ItemUseInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;
}
