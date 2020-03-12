#pragma once

#include <string>
#include "Packet.h"


class ShowStoreOfferPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    ~ShowStoreOfferPacket();
    ShowStoreOfferPacket();
    ShowStoreOfferPacket(std::string const&, bool);
};
