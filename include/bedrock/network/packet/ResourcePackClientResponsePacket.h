#pragma once

#include <string>
#include "Packet.h"
#include <set>


class ResourcePackClientResponsePacket : Packet {

public:
    ~ResourcePackClientResponsePacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ResourcePackClientResponsePacket();
//  bool isResponse(ResourcePackResponse)const; //TODO: incomplete function definition
//  ResourcePackClientResponsePacket(ResourcePackResponse); //TODO: incomplete function definition
    void getResponse()const;
    void setDownloadingPacks(std::set<std::string, std::less<std::string>, std::allocator<std::string>> &);
    std::string getDownloadingPacks()const;
};
