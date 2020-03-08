#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/ComplexInventoryTransaction"


class InventoryTransactionPacket : Packet {

public:
    virtual InventoryTransactionPacket::~InventoryTransactionPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventoryTransactionPacket(void);
    InventoryTransactionPacket(std::unique_ptr<ComplexInventoryTransaction, std::default_delete<ComplexInventoryTransaction>>);
};
