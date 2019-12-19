#pragma once

class ResourcePackDataInfoPacket : Packet {

public:
    virtual ResourcePackDataInfoPacket::~ResourcePackDataInfoPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackDataInfoPacket(void);
    ResourcePackDataInfoPacket(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType);
};
