#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class ResourcePacksInfoPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~ResourcePacksInfoPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ResourcePacksInfoPacket(bool, std::vector<ResourcePackInfoData> &, std::vector<ResourcePackInfoData> &);
    void getResourcePacksInfoData()const;
    ResourcePacksInfoPacket();
};
