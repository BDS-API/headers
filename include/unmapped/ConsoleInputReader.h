#pragma once

#include <string>


class ConsoleInputReader {

public:
    ConsoleInputReader();
    ~ConsoleInputReader();
    void unblockReading();
    void getLine(std::string &);
};
