#pragma once

class PlayerInputPacket : Packet {

public:
    virtual ~PlayerInputPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PlayerInputPacket(void);
    void PlayerInputPacket(float, float, bool, bool);
};
