#pragma once

#include <string>
#include "Packet.h"


class SettingsCommandPacket : Packet {

public:
    ~SettingsCommandPacket(); // _ZN21SettingsCommandPacketD2Ev
    virtual void getId()const; // _ZNK21SettingsCommandPacket5getIdEv
    virtual std::string getName()const; // _ZNK21SettingsCommandPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK21SettingsCommandPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN21SettingsCommandPacket4readER20ReadOnlyBinaryStream
    SettingsCommandPacket(); // _ZN21SettingsCommandPacketC2Ev
    SettingsCommandPacket(std::string const&, bool); // _ZN21SettingsCommandPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    std::string getCommandString()const; // _ZNK21SettingsCommandPacket16getCommandStringB5cxx11Ev
    void getSupressOutput()const; // _ZNK21SettingsCommandPacket16getSupressOutputEv
};
