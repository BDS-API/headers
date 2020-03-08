#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class GuiDataPickItemPacket : Packet {

public:
    GuiDataPickItemPacket::~GuiDataPickItemPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    GuiDataPickItemPacket(void);
    GuiDataPickItemPacket(std::string const&, std::string const&, int const&);
};
