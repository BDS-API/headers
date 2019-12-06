#pragma once

class ChangeDimensionPacket : Packet {

public:
    virtual ~ChangeDimensionPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ChangeDimensionPacket(void);
    void ChangeDimensionPacket(AutomaticID<Dimension, int>, Vec3, bool);
};
