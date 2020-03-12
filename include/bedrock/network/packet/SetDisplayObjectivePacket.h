#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class SetDisplayObjectivePacket : Packet {

public:
    ~SetDisplayObjectivePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
//  SetDisplayObjectivePacket(std::string const&, std::string const&, std::string const&, std::string const&, ObjectiveSortOrder); //TODO: incomplete function definition
    SetDisplayObjectivePacket();
};
