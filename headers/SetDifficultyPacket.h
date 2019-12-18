#pragma once

class SetDifficultyPacket : Packet {

public:
    virtual ~SetDifficultyPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetDifficultyPacket(void);
    void SetDifficultyPacket(Difficulty);
    void getDifficulty(void)const;
};
