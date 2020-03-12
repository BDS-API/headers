#pragma once

#include <string>


class FilterInput {

public:
    std::string getString()const;
    FilterInput(FilterInput const&);
    void getBool()const;
    void getType()const;
    FilterInput(float);
    void getInt()const;
    FilterInput(int);
    void getFloat()const;
    ~FilterInput();
    FilterInput(char const*);
    FilterInput(std::string const&);
    FilterInput(bool);
};
