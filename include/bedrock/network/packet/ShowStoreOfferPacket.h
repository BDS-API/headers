#pragma once

#include <string>
#include "Packet.h"


class ShowStoreOfferPacket : Packet {

public:
    ~ShowStoreOfferPacket(); // _ZN20ShowStoreOfferPacketD2Ev
    virtual void getId()const; // _ZNK20ShowStoreOfferPacket5getIdEv
    virtual std::string getName()const; // _ZNK20ShowStoreOfferPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK20ShowStoreOfferPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN20ShowStoreOfferPacket4readER20ReadOnlyBinaryStream
    ShowStoreOfferPacket(); // _ZN20ShowStoreOfferPacketC2Ev
    ShowStoreOfferPacket(std::string const&, bool); // _ZN20ShowStoreOfferPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
};
