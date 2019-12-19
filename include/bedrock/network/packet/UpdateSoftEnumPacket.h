#pragma once

class UpdateSoftEnumPacket : Packet {

public:
    virtual UpdateSoftEnumPacket::~UpdateSoftEnumPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateSoftEnumPacket(void);
    UpdateSoftEnumPacket(SoftEnumUpdateType, std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void getType(void)const;
};
