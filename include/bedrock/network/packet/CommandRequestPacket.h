#pragma once

#include <string>
#include "Packet.h"


class CommandRequestPacket : Packet {

public:
    ~CommandRequestPacket(); // _ZN20CommandRequestPacketD2Ev
    virtual void getId()const; // _ZNK20CommandRequestPacket5getIdEv
    virtual std::string getName()const; // _ZNK20CommandRequestPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK20CommandRequestPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN20CommandRequestPacket4readER20ReadOnlyBinaryStream
    CommandRequestPacket(); // _ZN20CommandRequestPacketC2Ev
    CommandRequestPacket(CommandContext &, bool); // _ZN20CommandRequestPacketC2ER14CommandContextb
    void createCommandContext(NetworkIdentifier const&, Level &, int)const; // _ZNK20CommandRequestPacket20createCommandContextERK17NetworkIdentifierR5Leveli
    void getInternalSource()const; // _ZNK20CommandRequestPacket17getInternalSourceEv
};
