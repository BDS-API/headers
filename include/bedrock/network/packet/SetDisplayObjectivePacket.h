#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class SetDisplayObjectivePacket : Packet {

public:
    SetDisplayObjectivePacket::~SetDisplayObjectivePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetDisplayObjectivePacket(void);
    SetDisplayObjectivePacket(std::string const&, std::string const&, std::string const&, std::string const&, ObjectiveSortOrder);
};
