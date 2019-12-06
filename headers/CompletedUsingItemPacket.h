#pragma once

class CompletedUsingItemPacket : Packet {

public:
    virtual ~CompletedUsingItemPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void CompletedUsingItemPacket(void);
    void CompletedUsingItemPacket(short, int);
};
