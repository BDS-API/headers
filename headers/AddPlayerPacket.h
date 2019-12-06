#pragma once

class AddPlayerPacket : Packet {

public:
    virtual ~AddPlayerPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void AddPlayerPacket(void);
    void AddPlayerPacket(Player &);
};
