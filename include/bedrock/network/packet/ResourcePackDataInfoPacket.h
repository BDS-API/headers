#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class ResourcePackDataInfoPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~ResourcePackDataInfoPacket();
    virtual std::string getName()const;
    ResourcePackDataInfoPacket();
//  ResourcePackDataInfoPacket(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType); //TODO: incomplete function definition
};
