#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/BaseGameVersion"
#include "../../../unmapped/PackInstanceId"


class ResourcePackStackPacket : Packet {

public:
    virtual ResourcePackStackPacket::~ResourcePackStackPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackStackPacket(void);
    ResourcePackStackPacket(std::vector<PackInstanceId, std::allocator<PackInstanceId>>, std::vector<PackInstanceId, std::allocator<PackInstanceId>>, BaseGameVersion const&, bool, bool);
    void getAddOnIdsAndVersions(void)const;
    void getTexturePackIdsAndVersions(void)const;
    bool isTexturePackRequired(void)const;
    bool isExperimental(void)const;
    void getBaseGameVersion(void)const;
};
