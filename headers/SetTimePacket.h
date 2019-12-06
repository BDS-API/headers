#pragma once

class SetTimePacket : Packet {

public:
    virtual ~SetTimePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetTimePacket(void);
    void SetTimePacket(int);
};
