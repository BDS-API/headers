#pragma once

class ShowStoreOfferPacket : Packet {

public:
    virtual ~ShowStoreOfferPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ShowStoreOfferPacket(void);
    void ShowStoreOfferPacket(std::string const&, bool);
};
