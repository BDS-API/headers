#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class ShowStoreOfferPacket : Packet {

public:
    ShowStoreOfferPacket::~ShowStoreOfferPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ShowStoreOfferPacket(void);
    ShowStoreOfferPacket(std::string const&, bool);
};
