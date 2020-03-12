#pragma once

#include <string>


class ConsoleInputReader {

public:
    void getLine(std::string &);
    ConsoleInputReader();
    void unblockReading();
    ~ConsoleInputReader();
};
