#pragma once

class SubClientLoginPacket : Packet {

public:
    virtual ~SubClientLoginPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;

    void SubClientLoginPacket(void);
    void SubClientLoginPacket(SubClientConnectionRequest const&);
    void SubClientLoginPacket(SubClientLoginPacket&&);
};
