#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include <vector>
#include <string>


class PurchaseReceiptPacket : Packet {

public:
    virtual ~PurchaseReceiptPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PurchaseReceiptPacket();
    PurchaseReceiptPacket(std::vector<std::string, std::allocator<std::string>> const&);
    PurchaseReceiptPacket(std::string const&);
};
