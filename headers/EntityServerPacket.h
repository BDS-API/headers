#pragma once

class EntityServerPacket : Packet {

public:
    virtual ~EntityServerPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void EntityServerPacket(void);
    void EntityServerPacket(EntityContext &);
    void getEntityNetId(void)const;
};
