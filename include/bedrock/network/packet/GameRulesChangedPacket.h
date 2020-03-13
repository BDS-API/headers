#pragma once

#include <string>
#include "Packet.h"


class GameRulesChangedPacket : Packet {

public:
    ~GameRulesChangedPacket(); // _ZN22GameRulesChangedPacketD2Ev
    virtual void getId()const; // _ZNK22GameRulesChangedPacket5getIdEv
    virtual std::string getName()const; // _ZNK22GameRulesChangedPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK22GameRulesChangedPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN22GameRulesChangedPacket4readER20ReadOnlyBinaryStream
    GameRulesChangedPacket(); // _ZN22GameRulesChangedPacketC2Ev
};
