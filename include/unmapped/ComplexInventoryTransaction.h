#pragma once



class ComplexInventoryTransaction {

public:
    virtual ~ComplexInventoryTransaction(); // _ZN27ComplexInventoryTransactionD2Ev
    virtual void __fake_function0(); // fake
    virtual void read(ReadOnlyBinaryStream &); // _ZN27ComplexInventoryTransaction4readER20ReadOnlyBinaryStream
    virtual void write(BinaryStream &)const; // _ZNK27ComplexInventoryTransaction5writeER12BinaryStream
    virtual void handle(Player &, bool)const; // _ZNK27ComplexInventoryTransaction6handleER6Playerb
    virtual void onTransactionError__incomplete0(Player &, long)const; //TODO: incomplete function definition // _ZNK27ComplexInventoryTransaction18onTransactionErrorER6Player25InventoryTransactionError
    void getType()const; // _ZNK27ComplexInventoryTransaction7getTypeEv
    void getInventoryTransaction(); // _ZN27ComplexInventoryTransaction23getInventoryTransactionEv
//    ComplexInventoryTransaction(long); //TODO: incomplete function definition // _ZN27ComplexInventoryTransactionC2ENS_4TypeE
//    ComplexInventoryTransaction(long, InventoryTransaction const&); //TODO: incomplete function definition // _ZN27ComplexInventoryTransactionC2ENS_4TypeERK20InventoryTransaction
//    void fromType(long); //TODO: incomplete function definition // _ZN27ComplexInventoryTransaction8fromTypeENS_4TypeE
//    void fromType(long, InventoryTransaction const&); //TODO: incomplete function definition // _ZN27ComplexInventoryTransaction8fromTypeENS_4TypeERK20InventoryTransaction
    void getInventoryTransaction()const; // _ZNK27ComplexInventoryTransaction23getInventoryTransactionEv
};
