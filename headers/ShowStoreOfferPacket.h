#pragma once

class ShowStoreOfferPacket : Packet {

    virtual ~ShowStoreOfferPacket();
    virtual ~ShowStoreOfferPacket();
    virtual void getId(void)const;
    virtual void _ZNK20ShowStoreOfferPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
