#pragma once

#include <string>
#include "Packet.h"


class ResourcePackDataInfoPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~ResourcePackDataInfoPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
//  ResourcePackDataInfoPacket(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType); //TODO: incomplete function definition
    ResourcePackDataInfoPacket();
};
