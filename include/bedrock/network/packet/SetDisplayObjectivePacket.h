#pragma once

#include <string>
#include "Packet.h"


class SetDisplayObjectivePacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~SetDisplayObjectivePacket();
//  SetDisplayObjectivePacket(std::string const&, std::string const&, std::string const&, std::string const&, ObjectiveSortOrder); //TODO: incomplete function definition
    SetDisplayObjectivePacket();
};
