#pragma once

#include <memory>
#include <string>
#include "Packet.h"


class InventoryTransactionPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~InventoryTransactionPacket();
    InventoryTransactionPacket(std::unique_ptr<ComplexInventoryTransaction>);
    InventoryTransactionPacket();
};
