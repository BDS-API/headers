#pragma once

class SetHealthPacket : Packet {

public:
    virtual ~SetHealthPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetHealthPacket(void);
    void SetHealthPacket(int);
};
