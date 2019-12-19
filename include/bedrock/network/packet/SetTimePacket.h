#pragma once

class SetTimePacket : Packet {

public:
    virtual SetTimePacket::~SetTimePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetTimePacket(void);
    SetTimePacket(int);
};
