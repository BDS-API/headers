#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class PurchaseReceiptPacket : Packet {

public:
    ~PurchaseReceiptPacket(); // _ZN21PurchaseReceiptPacketD2Ev
    virtual void getId()const; // _ZNK21PurchaseReceiptPacket5getIdEv
    virtual std::string getName()const; // _ZNK21PurchaseReceiptPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK21PurchaseReceiptPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN21PurchaseReceiptPacket4readER20ReadOnlyBinaryStream
    PurchaseReceiptPacket(); // _ZN21PurchaseReceiptPacketC2Ev
    PurchaseReceiptPacket(std::vector<std::string> const&); // _ZN21PurchaseReceiptPacketC2ERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    PurchaseReceiptPacket(std::string const&); // _ZN21PurchaseReceiptPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
