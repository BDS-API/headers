#pragma once

#include "../bedrock/io/BinaryStream"
#include "../bedrock/actor/Player"
#include "../bedrock/io/ReadOnlyBinaryStream"


class ComplexInventoryTransaction {

public:
    virtual ComplexInventoryTransaction::~ComplexInventoryTransaction()
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;

    void getType()const;
    void getInventoryTransaction();
    ComplexInventoryTransaction(ComplexInventoryTransaction::Type);
    ComplexInventoryTransaction(ComplexInventoryTransaction::Type, InventoryTransaction const&);
    void fromType(ComplexInventoryTransaction::Type);
    void fromType(ComplexInventoryTransaction::Type, InventoryTransaction const&);
    void getInventoryTransaction()const;
};
