#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/ComplexInventoryTransaction.h"
#include <memory>
#include "Packet.h"


class InventoryTransactionPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~InventoryTransactionPacket();
    InventoryTransactionPacket();
    InventoryTransactionPacket(std::unique_ptr<ComplexInventoryTransaction>);
};
