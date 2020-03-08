#pragma once

#include "../../../unmapped/ComplexInventoryTransaction"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class InventoryTransactionPacket : Packet {

public:
    InventoryTransactionPacket::~InventoryTransactionPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventoryTransactionPacket(void);
    InventoryTransactionPacket(std::unique_ptr<ComplexInventoryTransaction, std::default_delete<ComplexInventoryTransaction>>);
};
