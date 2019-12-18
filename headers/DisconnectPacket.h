#pragma once

class DisconnectPacket : Packet {

public:
    virtual ~DisconnectPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void DisconnectPacket(void);
    void DisconnectPacket(std::string const&, bool);
};
