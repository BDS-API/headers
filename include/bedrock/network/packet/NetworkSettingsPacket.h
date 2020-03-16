#pragma once

#include <string>
#include "Packet.h"


class NetworkSettingsPacket : public Packet {

public:
    virtual ~NetworkSettingsPacket(); // _ZN21NetworkSettingsPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK21NetworkSettingsPacket5getIdEv
    virtual std::string getName()const; // _ZNK21NetworkSettingsPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK21NetworkSettingsPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN21NetworkSettingsPacket4readER20ReadOnlyBinaryStream
    NetworkSettingsPacket(); // _ZN21NetworkSettingsPacketC2Ev
//    NetworkSettingsPacket(long const&); //TODO: incomplete function definition // _ZN21NetworkSettingsPacketC2ERK21NetworkSettingOptions
};
