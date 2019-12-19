#pragma once

class ModalFormRequestPacket : Packet {

public:
    virtual ModalFormRequestPacket::~ModalFormRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ModalFormRequestPacket(void);
    ModalFormRequestPacket(unsigned int, std::string const&);
};
