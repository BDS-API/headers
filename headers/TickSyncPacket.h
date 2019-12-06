#pragma once

class TickSyncPacket : Packet {

public:
    virtual ~TickSyncPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void TickSyncPacket(void);
    void TickSyncPacket(long);
};
