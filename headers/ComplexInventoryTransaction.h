#pragma once

class ComplexInventoryTransaction {

    virtual ~ComplexInventoryTransaction();
    virtual ~ComplexInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;
}
