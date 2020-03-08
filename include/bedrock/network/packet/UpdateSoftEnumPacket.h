#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class UpdateSoftEnumPacket : Packet {

public:
    virtual UpdateSoftEnumPacket::~UpdateSoftEnumPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateSoftEnumPacket(void);
    UpdateSoftEnumPacket(SoftEnumUpdateType, std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void getType()const;
};
