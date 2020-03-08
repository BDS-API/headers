#pragma once



class StopwatchHandler {

public:

    void get(std::string const&);
    void clear(std::string const&);
    void clearAll(void);
    void print(void);
    void printEvery(int);
};
