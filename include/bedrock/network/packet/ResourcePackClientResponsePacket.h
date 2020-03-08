#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class ResourcePackClientResponsePacket : Packet {

public:
    ResourcePackClientResponsePacket::~ResourcePackClientResponsePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackClientResponsePacket(void);
    ResourcePackClientResponsePacket(ResourcePackResponse);
    void setDownloadingPacks(std::set<std::string, std::less<std::string>, std::allocator<std::string>> &);
    bool isResponse(ResourcePackResponse)const;
    void getResponse()const;
};
