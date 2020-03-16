#pragma once

#include <string>
#include "Packet.h"


class MultiplayerSettingsPacket : public Packet {

public:
    virtual ~MultiplayerSettingsPacket(); // _ZN25MultiplayerSettingsPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK25MultiplayerSettingsPacket5getIdEv
    virtual std::string getName()const; // _ZNK25MultiplayerSettingsPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK25MultiplayerSettingsPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN25MultiplayerSettingsPacket4readER20ReadOnlyBinaryStream
    MultiplayerSettingsPacket(); // _ZN25MultiplayerSettingsPacketC2Ev
//    MultiplayerSettingsPacket(long); //TODO: incomplete function definition // _ZN25MultiplayerSettingsPacketC2E29MultiplayerSettingsPacketType
};
