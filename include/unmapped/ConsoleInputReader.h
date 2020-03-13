#pragma once

#include <string>


class ConsoleInputReader {

public:
    ConsoleInputReader(); // _ZN18ConsoleInputReaderC2Ev
    ~ConsoleInputReader(); // _ZN18ConsoleInputReaderD2Ev
    void getLine(std::string &); // _ZN18ConsoleInputReader7getLineERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void unblockReading(); // _ZN18ConsoleInputReader14unblockReadingEv
};
