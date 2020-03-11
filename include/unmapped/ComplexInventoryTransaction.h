#pragma once

#include "./InventoryTransaction.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "../bedrock/io/BinaryStream.h"
#include "../bedrock/actor/Player.h"


class ComplexInventoryTransaction {

public:
    virtual ~ComplexInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition

    void getType()const;
    void getInventoryTransaction();
//  ComplexInventoryTransaction(ComplexInventoryTransaction::Type); //TODO: incomplete function definition
//  ComplexInventoryTransaction(ComplexInventoryTransaction::Type, InventoryTransaction const&); //TODO: incomplete function definition
//  void fromType(ComplexInventoryTransaction::Type); //TODO: incomplete function definition
//  void fromType(ComplexInventoryTransaction::Type, InventoryTransaction const&); //TODO: incomplete function definition
    void getInventoryTransaction()const;
};
