#pragma once

class CommandRegistry::Signature {

public:

    void Signature(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, char const*, CommandPermissionLevel, CommandRegistry::Symbol, CommandFlag);
    void Signature(CommandRegistry::Signature&&);
};
