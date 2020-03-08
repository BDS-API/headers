#pragma once



class ConsoleInputReader {

public:

    ConsoleInputReader(void);
    void getLine(std::string &);
    void unblockReading();
};
