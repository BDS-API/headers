#pragma once

class ResourcePacksInfoPacket : Packet {

public:
    virtual ResourcePacksInfoPacket::~ResourcePacksInfoPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePacksInfoPacket(void);
    ResourcePacksInfoPacket(bool, std::vector<ResourcePackInfoData, std::allocator<ResourcePackInfoData>> &, std::vector<ResourcePackInfoData, std::allocator<ResourcePackInfoData>> &);
    void getResourcePacksInfoData(void)const;
};
