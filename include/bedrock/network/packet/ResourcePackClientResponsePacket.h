#pragma once

#include <set>
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include <string>


class ResourcePackClientResponsePacket : Packet {

public:
    virtual ~ResourcePackClientResponsePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ResourcePackClientResponsePacket();
//  ResourcePackClientResponsePacket(ResourcePackResponse); //TODO: incomplete function definition
//  void setDownloadingPacks(std::set<std::string, std::less<std::string>, std::allocator<std::string>> &); //TODO: incomplete function definition
    std::string getDownloadingPacks()const;
//  bool isResponse(ResourcePackResponse)const; //TODO: incomplete function definition
    void getResponse()const;
};
