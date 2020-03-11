#pragma once

#include "./Packet.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"


class SetDifficultyPacket : Packet {

public:
    virtual ~SetDifficultyPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetDifficultyPacket();
//  SetDifficultyPacket(Difficulty); //TODO: incomplete function definition
    void getDifficulty()const;
};
