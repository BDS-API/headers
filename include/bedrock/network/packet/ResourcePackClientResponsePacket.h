#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include <memory>
#include <set>
#include "Packet.h"


class ResourcePackClientResponsePacket : Packet {

public:
    virtual std::string getName()const;
    ~ResourcePackClientResponsePacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    void getResponse()const;
//  void setDownloadingPacks(std::set<std::string, std::less<std::string>, std::allocator<std::string>> &); //TODO: incomplete function definition
//  bool isResponse(ResourcePackResponse)const; //TODO: incomplete function definition
    std::string getDownloadingPacks()const;
//  ResourcePackClientResponsePacket(ResourcePackResponse); //TODO: incomplete function definition
    ResourcePackClientResponsePacket();
};
