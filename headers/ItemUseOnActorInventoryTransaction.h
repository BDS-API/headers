#pragma once

class ItemUseOnActorInventoryTransaction : ComplexInventoryTransaction {

    virtual ~ItemUseOnActorInventoryTransaction();
    virtual ~ItemUseOnActorInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;
}
