#pragma once

#include <string>
#include "Packet.h"


class SetDifficultyPacket : public Packet {

public:
    virtual ~SetDifficultyPacket(); // _ZN19SetDifficultyPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK19SetDifficultyPacket5getIdEv
    virtual std::string getName()const; // _ZNK19SetDifficultyPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK19SetDifficultyPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN19SetDifficultyPacket4readER20ReadOnlyBinaryStream
    SetDifficultyPacket(); // _ZN19SetDifficultyPacketC2Ev
//    SetDifficultyPacket(long); //TODO: incomplete function definition // _ZN19SetDifficultyPacketC2E10Difficulty
    void getDifficulty()const; // _ZNK19SetDifficultyPacket13getDifficultyEv
};
