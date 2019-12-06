#pragma once

class CommandSoftEnumRegistry {

public:

    void CommandSoftEnumRegistry(CommandRegistry *);
    void CommandSoftEnumRegistry(void);
    void updateSoftEnum(SoftEnumUpdateType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>);
    bool isValid(void)const;
};
