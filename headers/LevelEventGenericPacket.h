#pragma once

class LevelEventGenericPacket : Packet {

public:
    virtual ~LevelEventGenericPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void LevelEventGenericPacket(LevelEvent, CompoundTag const&);
    void LevelEventGenericPacket(void);
};
