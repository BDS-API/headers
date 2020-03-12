#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include <vector>
#include "Packet.h"


class PurchaseReceiptPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~PurchaseReceiptPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    PurchaseReceiptPacket(std::string const&);
    PurchaseReceiptPacket();
    PurchaseReceiptPacket(std::vector<std::string> const&);
};
