#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/io/BinaryStream.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "InventoryTransaction.h"


class ComplexInventoryTransaction {

public:
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition
    ~ComplexInventoryTransaction();
    virtual void handle(Player &, bool)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    void getType()const;
    void getInventoryTransaction()const;
//  ComplexInventoryTransaction(ComplexInventoryTransaction::Type, InventoryTransaction const&); //TODO: incomplete function definition
//  void fromType(ComplexInventoryTransaction::Type); //TODO: incomplete function definition
//  ComplexInventoryTransaction(ComplexInventoryTransaction::Type); //TODO: incomplete function definition
    void getInventoryTransaction();
//  void fromType(ComplexInventoryTransaction::Type, InventoryTransaction const&); //TODO: incomplete function definition
};
