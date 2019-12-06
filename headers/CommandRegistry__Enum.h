#pragma once

class CommandRegistry::Enum {

public:

    void Enum(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, typeid_t<CommandRegistry>, bool (CommandRegistry::*)(void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &)const);
    void Enum(CommandRegistry::Enum&&);
};
