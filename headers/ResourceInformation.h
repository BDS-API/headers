#pragma once

class ResourceInformation {

public:

    void ResourceInformation(ResourceInformation const&);
    void ResourceTypeFromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ResourceInformation(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, SemVersion const&, mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ResourceInformation(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, SemVersion const&, mce::UUID const&, ResourceInformation::ResourceType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void satisfies(PackIdVersion const&)const;
};
