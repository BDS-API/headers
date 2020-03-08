#pragma once

#include "../../io/BinaryStream"
#include "../../resourcepack/ResourcePackInfoData"
#include "../../io/ReadOnlyBinaryStream"


class ResourcePacksInfoPacket : Packet {

public:
    virtual ResourcePacksInfoPacket::~ResourcePacksInfoPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePacksInfoPacket(void);
    ResourcePacksInfoPacket(bool, std::vector<ResourcePackInfoData, std::allocator<ResourcePackInfoData>> &, std::vector<ResourcePackInfoData, std::allocator<ResourcePackInfoData>> &);
    void getResourcePacksInfoData()const;
};
