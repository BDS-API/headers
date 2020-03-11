#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include "../../resourcepack/ResourcePackInfoData.h"
#include <vector>
#include <string>


class ResourcePacksInfoPacket : Packet {

public:
    virtual ~ResourcePacksInfoPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePacksInfoPacket();
    ResourcePacksInfoPacket(bool, std::vector<ResourcePackInfoData, std::allocator<ResourcePackInfoData>> &, std::vector<ResourcePackInfoData, std::allocator<ResourcePackInfoData>> &);
    void getResourcePacksInfoData()const;
};
