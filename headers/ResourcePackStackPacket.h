#pragma once

class ResourcePackStackPacket : Packet {

public:
    virtual ~ResourcePackStackPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ResourcePackStackPacket(void);
    void ResourcePackStackPacket(std::vector<PackInstanceId, std::allocator<PackInstanceId>>, std::vector<PackInstanceId, std::allocator<PackInstanceId>>, BaseGameVersion const&, bool, bool);
    void getAddOnIdsAndVersions(void)const;
    void getTexturePackIdsAndVersions(void)const;
    bool isTexturePackRequired(void)const;
    bool isExperimental(void)const;
    void getBaseGameVersion(void)const;
};
