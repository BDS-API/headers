#pragma once



class FilterInput {

public:

    FilterInput(int);
    void getType(void)const;
    FilterInput(float);
    FilterInput(std::string const&);
    FilterInput(bool);
    FilterInput(FilterInput const&);
    FilterInput(char const*);
    void getInt(void)const;
    void getBool(void)const;
    void getFloat(void)const;
};
