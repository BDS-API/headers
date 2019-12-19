#pragma once

class ShowStoreOfferPacket : Packet {

public:
    virtual ShowStoreOfferPacket::~ShowStoreOfferPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ShowStoreOfferPacket(void);
    ShowStoreOfferPacket(std::string const&, bool);
};
