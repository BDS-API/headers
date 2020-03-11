#pragma once

#include <string>


class StopwatchHandler {

public:

    void get(std::string const&);
    void clear(std::string const&);
    void clearAll();
    void print();
    void printEvery(int);
};
