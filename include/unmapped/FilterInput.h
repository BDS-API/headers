#pragma once



class FilterInput {

public:

    FilterInput(int);
    void getType()const;
    FilterInput(float);
    FilterInput(std::string const&);
    FilterInput(bool);
    FilterInput(FilterInput const&);
    FilterInput(char const*);
    void getInt()const;
    void getBool()const;
    void getFloat()const;
};
