#pragma once

class LevelEventPacket : Packet {

public:
    virtual ~LevelEventPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void LevelEventPacket(LevelEvent, Vec3 const&, int);
    void LevelEventPacket(LevelEvent, float, float, float, int);
    void LevelEventPacket(void);
};
