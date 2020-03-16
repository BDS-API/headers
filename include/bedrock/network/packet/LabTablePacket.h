#pragma once

#include <string>
#include "Packet.h"


class LabTablePacket : public Packet {

public:
    virtual ~LabTablePacket(); // _ZN14LabTablePacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK14LabTablePacket5getIdEv
    virtual std::string getName()const; // _ZNK14LabTablePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK14LabTablePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN14LabTablePacket4readER20ReadOnlyBinaryStream
    LabTablePacket(); // _ZN14LabTablePacketC2Ev
//    LabTablePacket(BlockPos const&, long); //TODO: incomplete function definition // _ZN14LabTablePacketC2ERK8BlockPos20LabTableReactionType
//    LabTablePacket(long, BlockPos const&); //TODO: incomplete function definition // _ZN14LabTablePacketC2ENS_4TypeERK8BlockPos
};
