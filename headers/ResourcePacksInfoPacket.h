#pragma once

class ResourcePacksInfoPacket : Packet {

public:
    virtual ~ResourcePacksInfoPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ResourcePacksInfoPacket(void);
    void ResourcePacksInfoPacket(bool, std::vector<ResourcePackInfoData, std::allocator<ResourcePackInfoData>> &, std::vector<ResourcePackInfoData, std::allocator<ResourcePackInfoData>> &);
    void getResourcePacksInfoData(void)const;
};
