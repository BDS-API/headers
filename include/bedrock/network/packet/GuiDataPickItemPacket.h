#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class GuiDataPickItemPacket : Packet {

public:
    virtual ~GuiDataPickItemPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    GuiDataPickItemPacket();
    GuiDataPickItemPacket(std::string const&, std::string const&, int const&);
};
