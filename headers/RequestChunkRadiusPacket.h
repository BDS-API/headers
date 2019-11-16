#pragma once

class RequestChunkRadiusPacket : Packet {

    virtual ~RequestChunkRadiusPacket();
    virtual ~RequestChunkRadiusPacket();
    virtual void getId(void)const;
    virtual void _ZNK24RequestChunkRadiusPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
