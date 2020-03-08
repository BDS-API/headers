#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class UpdateSoftEnumPacket : Packet {

public:
    UpdateSoftEnumPacket::~UpdateSoftEnumPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateSoftEnumPacket(void);
    UpdateSoftEnumPacket(SoftEnumUpdateType, std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void getType()const;
};
