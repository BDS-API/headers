#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class GuiDataPickItemPacket : Packet {

public:
    virtual GuiDataPickItemPacket::~GuiDataPickItemPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    GuiDataPickItemPacket(void);
    GuiDataPickItemPacket(std::string const&, std::string const&, int const&);
};
