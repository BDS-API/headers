#pragma once

class ResourcePackDataInfoPacket : Packet {

public:
    virtual ~ResourcePackDataInfoPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ResourcePackDataInfoPacket(void);
    void ResourcePackDataInfoPacket(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType);
};
