#pragma once

class LevelEventGenericPacket : Packet {

public:
    virtual LevelEventGenericPacket::~LevelEventGenericPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LevelEventGenericPacket(LevelEvent, CompoundTag const&);
    LevelEventGenericPacket(void);
};
