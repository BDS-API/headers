#pragma once

class OptionalString {

public:

    void OptionalString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void OptionalString(decltype(nullptr));
    void OptionalString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &&);
};
