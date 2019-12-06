#pragma once

class ComplexInventoryTransaction {

public:
    virtual ~ComplexInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;

    void getType(void)const;
    void getInventoryTransaction(void);
    void ComplexInventoryTransaction(ComplexInventoryTransaction::Type);
    void ComplexInventoryTransaction(ComplexInventoryTransaction::Type, InventoryTransaction const&);
    void fromType(ComplexInventoryTransaction::Type);
    void fromType(ComplexInventoryTransaction::Type, InventoryTransaction const&);
    void getInventoryTransaction(void)const;
};
