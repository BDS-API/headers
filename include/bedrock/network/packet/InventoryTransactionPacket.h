#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include "../../../unmapped/ComplexInventoryTransaction.h"
#include <string>


class InventoryTransactionPacket : Packet {

public:
    virtual ~InventoryTransactionPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InventoryTransactionPacket();
    InventoryTransactionPacket(std::unique_ptr<ComplexInventoryTransaction, std::default_delete<ComplexInventoryTransaction>>);
};
