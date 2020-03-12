#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class ShowStoreOfferPacket : Packet {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ~ShowStoreOfferPacket();
    ShowStoreOfferPacket(std::string const&, bool);
    ShowStoreOfferPacket();
};
