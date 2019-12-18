#pragma once

class TransferPacket : Packet {

public:
    virtual ~TransferPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void TransferPacket(void);
    void TransferPacket(std::string const&, int);
};
