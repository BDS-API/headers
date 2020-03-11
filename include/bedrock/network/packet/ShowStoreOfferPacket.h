#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class ShowStoreOfferPacket : Packet {

public:
    virtual ~ShowStoreOfferPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ShowStoreOfferPacket();
    ShowStoreOfferPacket(std::string const&, bool);
};
