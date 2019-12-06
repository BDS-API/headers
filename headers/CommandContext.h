#pragma once

class CommandContext {

public:

    void CommandContext(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, int);
    void getCommandOrigin(void)const;
    void getVersion(void)const;
};
