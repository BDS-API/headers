#pragma once

#include "../../../unmapped/PackInstanceId.h"
#include "../../../unmapped/BaseGameVersion.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include <vector>
#include <string>


class ResourcePackStackPacket : Packet {

public:
    virtual ~ResourcePackStackPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackStackPacket();
    ResourcePackStackPacket(std::vector<PackInstanceId, std::allocator<PackInstanceId>>, std::vector<PackInstanceId, std::allocator<PackInstanceId>>, BaseGameVersion const&, bool, bool);
    void getAddOnIdsAndVersions()const;
    void getTexturePackIdsAndVersions()const;
    bool isTexturePackRequired()const;
    bool isExperimental()const;
    void getBaseGameVersion()const;
};
