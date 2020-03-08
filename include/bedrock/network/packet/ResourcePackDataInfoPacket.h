#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ResourcePackDataInfoPacket : Packet {

public:
    virtual ResourcePackDataInfoPacket::~ResourcePackDataInfoPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackDataInfoPacket(void);
    ResourcePackDataInfoPacket(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType);
};
