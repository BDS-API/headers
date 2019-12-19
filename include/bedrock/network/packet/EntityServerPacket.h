#pragma once

class EntityServerPacket : Packet {

public:
    virtual EntityServerPacket::~EntityServerPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EntityServerPacket(void);
    EntityServerPacket(EntityContext &);
    void getEntityNetId(void)const;
};
