#pragma once

#include <string>
#include "Packet.h"


class PlayerAuthInputPacket : Packet {

public:
    ~PlayerAuthInputPacket(); // _ZN21PlayerAuthInputPacketD2Ev
    virtual void getId()const; // _ZNK21PlayerAuthInputPacket5getIdEv
    virtual std::string getName()const; // _ZNK21PlayerAuthInputPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK21PlayerAuthInputPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN21PlayerAuthInputPacket4readER20ReadOnlyBinaryStream
    PlayerAuthInputPacket(); // _ZN21PlayerAuthInputPacketC2Ev
//  void getInput(PlayerAuthInputPacket::InputData)const; //TODO: incomplete function definition // _ZNK21PlayerAuthInputPacket8getInputENS_9InputDataE
//  void setInput(PlayerAuthInputPacket::InputData, bool); //TODO: incomplete function definition // _ZN21PlayerAuthInputPacket8setInputENS_9InputDataEb
};
