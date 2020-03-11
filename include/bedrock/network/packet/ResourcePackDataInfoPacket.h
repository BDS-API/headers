#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class ResourcePackDataInfoPacket : Packet {

public:
    virtual ~ResourcePackDataInfoPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackDataInfoPacket();
//  ResourcePackDataInfoPacket(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType); //TODO: incomplete function definition
};
