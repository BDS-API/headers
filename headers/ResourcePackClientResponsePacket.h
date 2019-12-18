#pragma once

class ResourcePackClientResponsePacket : Packet {

public:
    virtual ~ResourcePackClientResponsePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ResourcePackClientResponsePacket(void);
    void ResourcePackClientResponsePacket(ResourcePackResponse);
    void setDownloadingPacks(std::set<std::string, std::less<std::string>, std::allocator<std::string>> &);
    bool isResponse(ResourcePackResponse)const;
    void getResponse(void)const;
};
