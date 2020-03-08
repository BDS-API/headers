#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetDifficultyPacket : Packet {

public:
    virtual SetDifficultyPacket::~SetDifficultyPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetDifficultyPacket(void);
    SetDifficultyPacket(Difficulty);
    void getDifficulty()const;
};
