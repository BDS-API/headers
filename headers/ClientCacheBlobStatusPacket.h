#pragma once

class ClientCacheBlobStatusPacket : Packet {

public:
    virtual ~ClientCacheBlobStatusPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ClientCacheBlobStatusPacket(void);
    bool isFull(void)const;
    bool isEmpty(void)const;
};
