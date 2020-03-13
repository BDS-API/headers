#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class ResourcePackStackPacket : Packet {

public:
    ~ResourcePackStackPacket(); // _ZN23ResourcePackStackPacketD2Ev
    virtual void getId()const; // _ZNK23ResourcePackStackPacket5getIdEv
    virtual std::string getName()const; // _ZNK23ResourcePackStackPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23ResourcePackStackPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23ResourcePackStackPacket4readER20ReadOnlyBinaryStream
    ResourcePackStackPacket(); // _ZN23ResourcePackStackPacketC2Ev
    ResourcePackStackPacket(std::vector<PackInstanceId>, std::vector<PackInstanceId>, BaseGameVersion const&, bool, bool); // _ZN23ResourcePackStackPacketC2ESt6vectorI14PackInstanceIdSaIS1_EES3_RK15BaseGameVersionbb
    void getAddOnIdsAndVersions()const; // _ZNK23ResourcePackStackPacket22getAddOnIdsAndVersionsEv
    void getTexturePackIdsAndVersions()const; // _ZNK23ResourcePackStackPacket28getTexturePackIdsAndVersionsEv
    bool isTexturePackRequired()const; // _ZNK23ResourcePackStackPacket21isTexturePackRequiredEv
    bool isExperimental()const; // _ZNK23ResourcePackStackPacket14isExperimentalEv
    void getBaseGameVersion()const; // _ZNK23ResourcePackStackPacket18getBaseGameVersionEv
};
