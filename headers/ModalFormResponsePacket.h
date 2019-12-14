#pragma once

class ModalFormResponsePacket : Packet {

public:
    virtual ~ModalFormResponsePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ModalFormResponsePacket(void);
    void ModalFormResponsePacket(unsigned int, std::string const&);
};
