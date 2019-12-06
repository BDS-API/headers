#pragma once

class ResourcePackInfoData {

public:

    void ResourcePackInfoData(ResourcePackInfoData&&);
    void ResourcePackInfoData(ResourcePackInfoData const&);
    void ResourcePackInfoData(mce::UUID const&, SemVersion const&, unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ContentIdentity const&, bool);
    void ResourcePackInfoData(void);
};
