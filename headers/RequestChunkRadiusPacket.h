#pragma once

class RequestChunkRadiusPacket : Packet {

public:
    virtual ~RequestChunkRadiusPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void RequestChunkRadiusPacket(void);
    void RequestChunkRadiusPacket(int);
};
