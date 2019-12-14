#pragma once

class ModalFormRequestPacket : Packet {

public:
    virtual ~ModalFormRequestPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ModalFormRequestPacket(void);
    void ModalFormRequestPacket(unsigned int, std::string const&);
};
