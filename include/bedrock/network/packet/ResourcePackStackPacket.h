#pragma once

#include "../../../unmapped/BaseGameVersion"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/PackInstanceId"
#include "../../io/BinaryStream"


class ResourcePackStackPacket : Packet {

public:
    ResourcePackStackPacket::~ResourcePackStackPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackStackPacket(void);
    ResourcePackStackPacket(std::vector<PackInstanceId, std::allocator<PackInstanceId>>, std::vector<PackInstanceId, std::allocator<PackInstanceId>>, BaseGameVersion const&, bool, bool);
    void getAddOnIdsAndVersions()const;
    void getTexturePackIdsAndVersions()const;
    bool isTexturePackRequired()const;
    bool isExperimental()const;
    void getBaseGameVersion()const;
};
