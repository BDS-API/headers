#pragma once

#include <string>


class ConsoleInputReader {

public:

    ConsoleInputReader();
    ~ConsoleInputReader();
    void getLine(std::string &);
    void unblockReading();
};
