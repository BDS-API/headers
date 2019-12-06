#pragma once

class ContextMessage {

public:

    void ContextMessage(LogArea, LogLevel, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ContextMessage(ContextMessage&&);
    void ContextMessage(ContextMessage const&);
};
