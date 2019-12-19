#pragma once

class SetDisplayObjectivePacket : Packet {

public:
    virtual SetDisplayObjectivePacket::~SetDisplayObjectivePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetDisplayObjectivePacket(void);
    SetDisplayObjectivePacket(std::string const&, std::string const&, std::string const&, std::string const&, ObjectiveSortOrder);
};
