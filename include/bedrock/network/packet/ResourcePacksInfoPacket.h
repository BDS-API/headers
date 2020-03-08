#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../resourcepack/ResourcePackInfoData"
#include "../../io/BinaryStream"


class ResourcePacksInfoPacket : Packet {

public:
    ResourcePacksInfoPacket::~ResourcePacksInfoPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePacksInfoPacket(void);
    ResourcePacksInfoPacket(bool, std::vector<ResourcePackInfoData, std::allocator<ResourcePackInfoData>> &, std::vector<ResourcePackInfoData, std::allocator<ResourcePackInfoData>> &);
    void getResourcePacksInfoData()const;
};
