#pragma once

class ClientCacheMissResponsePacket : Packet {

public:
    virtual ~ClientCacheMissResponsePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ClientCacheMissResponsePacket(void);
};
