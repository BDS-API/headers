#pragma once

class ResourcePackClientResponsePacket : Packet {

public:
    virtual ~ResourcePackClientResponsePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ResourcePackClientResponsePacket(void);
    void ResourcePackClientResponsePacket(ResourcePackResponse);
    void setDownloadingPacks(std::set<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &);
    bool isResponse(ResourcePackResponse)const;
    void getResponse(void)const;
};
