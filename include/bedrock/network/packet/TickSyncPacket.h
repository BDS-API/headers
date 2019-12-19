#pragma once

class TickSyncPacket : Packet {

public:
    virtual TickSyncPacket::~TickSyncPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    TickSyncPacket(void);
    TickSyncPacket(long);
};
