#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../resourcepack/ResourcePackInfoData.h"
#include <vector>
#include "Packet.h"


class ResourcePacksInfoPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~ResourcePacksInfoPacket();
    ResourcePacksInfoPacket();
    ResourcePacksInfoPacket(bool, std::vector<ResourcePackInfoData> &, std::vector<ResourcePackInfoData> &);
    void getResourcePacksInfoData()const;
};
