#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class GuiDataPickItemPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ~GuiDataPickItemPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    GuiDataPickItemPacket();
    GuiDataPickItemPacket(std::string const&, std::string const&, int const&);
};
