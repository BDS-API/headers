#pragma once

class PackInstanceId {

public:

    void PackInstanceId(PackInstanceId const&);
    void PackInstanceId(PackInstanceId&&);
    void PackInstanceId(void);
    void PackInstanceId(PackIdVersion const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
