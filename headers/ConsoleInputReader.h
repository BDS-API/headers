#pragma once

class ConsoleInputReader {

public:

    void ConsoleInputReader(void);
    void getLine(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void unblockReading(void);
};
