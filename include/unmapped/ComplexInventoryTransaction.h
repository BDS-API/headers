#pragma once



class ComplexInventoryTransaction {

public:
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~ComplexInventoryTransaction();
//  ComplexInventoryTransaction(ComplexInventoryTransaction::Type); //TODO: incomplete function definition
    void getInventoryTransaction();
    void getType()const;
//  void fromType(ComplexInventoryTransaction::Type, InventoryTransaction const&); //TODO: incomplete function definition
//  ComplexInventoryTransaction(ComplexInventoryTransaction::Type, InventoryTransaction const&); //TODO: incomplete function definition
//  void fromType(ComplexInventoryTransaction::Type); //TODO: incomplete function definition
    void getInventoryTransaction()const;
};
