#pragma once

class CommandParameterData {

public:

    void CommandParameterData(typeid_t<CommandRegistry>, bool (CommandRegistry::*)(void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &)const, char const*, CommandParameterDataType, char const*, int, bool, int);
    void CommandParameterData(CommandParameterData const&);
    void addOptions(CommandParameterOption);
    bool hasOption(CommandParameterOption)const;
};
