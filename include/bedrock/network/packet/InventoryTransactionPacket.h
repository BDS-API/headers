#pragma once

#include <string>
#include <memory>
#include "Packet.h"


class InventoryTransactionPacket : Packet {

public:
    ~InventoryTransactionPacket(); // _ZN26InventoryTransactionPacketD2Ev
    virtual void getId()const; // _ZNK26InventoryTransactionPacket5getIdEv
    virtual std::string getName()const; // _ZNK26InventoryTransactionPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK26InventoryTransactionPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN26InventoryTransactionPacket4readER20ReadOnlyBinaryStream
    InventoryTransactionPacket(); // _ZN26InventoryTransactionPacketC2Ev
    InventoryTransactionPacket(std::unique_ptr<ComplexInventoryTransaction>); // _ZN26InventoryTransactionPacketC2ESt10unique_ptrI27ComplexInventoryTransactionSt14default_deleteIS1_EE
};
