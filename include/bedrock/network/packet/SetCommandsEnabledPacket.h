#pragma once

#include <string>
#include "Packet.h"


class SetCommandsEnabledPacket : Packet {

public:
    ~SetCommandsEnabledPacket(); // _ZN24SetCommandsEnabledPacketD2Ev
    virtual void getId()const; // _ZNK24SetCommandsEnabledPacket5getIdEv
    virtual std::string getName()const; // _ZNK24SetCommandsEnabledPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK24SetCommandsEnabledPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN24SetCommandsEnabledPacket4readER20ReadOnlyBinaryStream
    SetCommandsEnabledPacket(); // _ZN24SetCommandsEnabledPacketC2Ev
    SetCommandsEnabledPacket(bool); // _ZN24SetCommandsEnabledPacketC2Eb
    bool hasCommandsEnabled()const; // _ZNK24SetCommandsEnabledPacket18hasCommandsEnabledEv
};
