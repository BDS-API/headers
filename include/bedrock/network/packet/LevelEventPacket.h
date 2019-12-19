#pragma once

class LevelEventPacket : Packet {

public:
    virtual LevelEventPacket::~LevelEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelEventPacket(LevelEvent, Vec3 const&, int);
    LevelEventPacket(LevelEvent, float, float, float, int);
    LevelEventPacket(void);
};
