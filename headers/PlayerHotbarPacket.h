#pragma once

class PlayerHotbarPacket : Packet {

public:
    virtual ~PlayerHotbarPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PlayerHotbarPacket(void);
    void PlayerHotbarPacket(unsigned int, ContainerID, bool);
};
