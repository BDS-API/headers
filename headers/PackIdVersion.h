#pragma once

class PackIdVersion {

public:

    void PackIdVersion(PackIdVersion const&);
    void PackIdVersion(PackIdVersion&&);
    void PackIdVersion(void);
    void PackIdVersion(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PackType);
    void PackIdVersion(mce::UUID const&, SemVersion const&, PackType);
    void satisfies(PackIdVersion const&)const;
};
