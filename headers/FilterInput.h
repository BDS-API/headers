#pragma once

class FilterInput {

public:

    void FilterInput(int);
    void getType(void)const;
    void FilterInput(float);
    void FilterInput(std::string const&);
    void FilterInput(bool);
    void FilterInput(FilterInput const&);
    void FilterInput(char const*);
    void getInt(void)const;
    void getBool(void)const;
    void getFloat(void)const;
};
