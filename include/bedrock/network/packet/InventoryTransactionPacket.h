#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/ComplexInventoryTransaction"


class InventoryTransactionPacket : Packet {

public:
    virtual InventoryTransactionPacket::~InventoryTransactionPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventoryTransactionPacket(void);
    InventoryTransactionPacket(std::unique_ptr<ComplexInventoryTransaction, std::default_delete<ComplexInventoryTransaction>>);
};
