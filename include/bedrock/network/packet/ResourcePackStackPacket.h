#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/PackInstanceId.h"
#include <vector>
#include "Packet.h"
#include "../../../unmapped/BaseGameVersion.h"


class ResourcePackStackPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~ResourcePackStackPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    bool isExperimental()const;
    ResourcePackStackPacket(std::vector<PackInstanceId>, std::vector<PackInstanceId>, BaseGameVersion const&, bool, bool);
    void getBaseGameVersion()const;
    ResourcePackStackPacket();
    bool isTexturePackRequired()const;
    void getAddOnIdsAndVersions()const;
    void getTexturePackIdsAndVersions()const;
};
