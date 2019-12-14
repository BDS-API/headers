#pragma once

class ShowProfilePacket : Packet {

public:
    virtual ~ShowProfilePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ShowProfilePacket(void);
    void ShowProfilePacket(std::string const&);
};
