#pragma once

class EnumOption : IntOption {

public:
    virtual ~EnumOption();

    void EnumOption(OptionID, OptionOwnerType, OptionResetFlags, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, std::vector<int, std::allocator<int>> const&, std::unordered_map<int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<int const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> const&);
};
