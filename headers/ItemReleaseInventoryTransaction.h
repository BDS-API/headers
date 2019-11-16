#pragma once

class ItemReleaseInventoryTransaction : ComplexInventoryTransaction {

    virtual void ItemReleaseInventoryTransaction::~ItemReleaseInventoryTransaction();
    virtual void ItemReleaseInventoryTransaction::~ItemReleaseInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;
}
