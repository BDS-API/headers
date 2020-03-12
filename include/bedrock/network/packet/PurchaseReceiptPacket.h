#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class PurchaseReceiptPacket : Packet {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~PurchaseReceiptPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    PurchaseReceiptPacket();
    PurchaseReceiptPacket(std::vector<std::string> const&);
    PurchaseReceiptPacket(std::string const&);
};
