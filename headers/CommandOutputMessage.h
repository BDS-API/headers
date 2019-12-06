#pragma once

class CommandOutputMessage {

public:

    void CommandOutputMessage(CommandOutputMessageType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &&);
    void CommandOutputMessage(CommandOutputMessage&&);
    void CommandOutputMessage(CommandOutputMessage const&);
    void getType(void)const;
};
