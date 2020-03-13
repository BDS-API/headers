#pragma once

#include <string>
#include "Packet.h"


class ServerSettingsResponsePacket : Packet {

public:
    ~ServerSettingsResponsePacket(); // _ZN28ServerSettingsResponsePacketD2Ev
    virtual void getId()const; // _ZNK28ServerSettingsResponsePacket5getIdEv
    virtual std::string getName()const; // _ZNK28ServerSettingsResponsePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK28ServerSettingsResponsePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN28ServerSettingsResponsePacket4readER20ReadOnlyBinaryStream
    ServerSettingsResponsePacket(); // _ZN28ServerSettingsResponsePacketC2Ev
    ServerSettingsResponsePacket(unsigned int, std::string const&); // _ZN28ServerSettingsResponsePacketC2EjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
