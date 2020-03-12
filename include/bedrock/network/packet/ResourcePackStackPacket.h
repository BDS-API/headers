#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class ResourcePackStackPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~ResourcePackStackPacket();
    virtual void write(BinaryStream &)const;
    void getBaseGameVersion()const;
    void getTexturePackIdsAndVersions()const;
    ResourcePackStackPacket();
    bool isTexturePackRequired()const;
    void getAddOnIdsAndVersions()const;
    ResourcePackStackPacket(std::vector<PackInstanceId>, std::vector<PackInstanceId>, BaseGameVersion const&, bool, bool);
    bool isExperimental()const;
};
