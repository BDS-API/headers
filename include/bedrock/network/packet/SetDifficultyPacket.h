#pragma once

#include <string>
#include "Packet.h"


class SetDifficultyPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~SetDifficultyPacket();
    virtual std::string getName()const;
//  SetDifficultyPacket(Difficulty); //TODO: incomplete function definition
    SetDifficultyPacket();
    void getDifficulty()const;
};
