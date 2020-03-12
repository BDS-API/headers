#pragma once

#include <string>


class FilterInput {

public:
    void getType()const;
    FilterInput(char const*);
    FilterInput(int);
    std::string getString()const;
    ~FilterInput();
    void getBool()const;
    FilterInput(bool);
    FilterInput(FilterInput const&);
    FilterInput(std::string const&);
    FilterInput(float);
    void getFloat()const;
    void getInt()const;
};
