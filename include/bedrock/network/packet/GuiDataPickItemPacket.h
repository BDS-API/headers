#pragma once

#include <string>
#include "Packet.h"


class GuiDataPickItemPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~GuiDataPickItemPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    GuiDataPickItemPacket(std::string const&, std::string const&, int const&);
    GuiDataPickItemPacket();
};
