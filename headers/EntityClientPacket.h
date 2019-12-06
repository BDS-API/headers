#pragma once

class EntityClientPacket : Packet {

public:
    virtual ~EntityClientPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void EntityClientPacket(void);
    void EntityClientPacket(NetworkComponent &);
    void getEntityNetId(void)const;
};
