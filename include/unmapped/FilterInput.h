#pragma once

#include "./FilterInput.h"
#include <string>


class FilterInput {

public:

    FilterInput(int);
    ~FilterInput();
    void getType()const;
    std::string getString()const;
    FilterInput(float);
    FilterInput(std::string const&);
    FilterInput(bool);
    FilterInput(FilterInput const&);
    FilterInput(char const*);
    void getInt()const;
    void getBool()const;
    void getFloat()const;
};
