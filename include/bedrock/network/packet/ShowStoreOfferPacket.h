#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ShowStoreOfferPacket : Packet {

public:
    virtual ShowStoreOfferPacket::~ShowStoreOfferPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ShowStoreOfferPacket(void);
    ShowStoreOfferPacket(std::string const&, bool);
};
