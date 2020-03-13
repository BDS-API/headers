#pragma once

#include <string>
#include "Packet.h"


class ServerSettingsRequestPacket : Packet {

public:
    ~ServerSettingsRequestPacket(); // _ZN27ServerSettingsRequestPacketD2Ev
    virtual void getId()const; // _ZNK27ServerSettingsRequestPacket5getIdEv
    virtual std::string getName()const; // _ZNK27ServerSettingsRequestPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK27ServerSettingsRequestPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN27ServerSettingsRequestPacket4readER20ReadOnlyBinaryStream
    ServerSettingsRequestPacket(); // _ZN27ServerSettingsRequestPacketC2Ev
};
