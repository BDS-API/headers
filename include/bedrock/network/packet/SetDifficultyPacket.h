#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class SetDifficultyPacket : Packet {

public:
    ~SetDifficultyPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
//  SetDifficultyPacket(Difficulty); //TODO: incomplete function definition
    void getDifficulty()const;
    SetDifficultyPacket();
};
