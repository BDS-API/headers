#pragma once

#include <string>
#include "Packet.h"


class LoginPacket : Packet {

public:
    ~LoginPacket(); // _ZN11LoginPacketD2Ev
    virtual void getId()const; // _ZNK11LoginPacket5getIdEv
    virtual std::string getName()const; // _ZNK11LoginPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK11LoginPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN11LoginPacket4readER20ReadOnlyBinaryStream
    virtual void disallowBatching()const; // _ZNK11LoginPacket16disallowBatchingEv
    LoginPacket(); // _ZN11LoginPacketC2Ev
    LoginPacket(int, ConnectionRequest const&); // _ZN11LoginPacketC2EiRK17ConnectionRequest
    LoginPacket(LoginPacket &&); // _ZN11LoginPacketC2EOS_
};
