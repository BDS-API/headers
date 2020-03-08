#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class ResourcePackDataInfoPacket : Packet {

public:
    ResourcePackDataInfoPacket::~ResourcePackDataInfoPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackDataInfoPacket(void);
    ResourcePackDataInfoPacket(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType);
};
