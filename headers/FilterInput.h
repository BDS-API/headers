#pragma once

class FilterInput {

public:

    void FilterInput(int);
    void getType(void)const;
    void FilterInput(float);
    void FilterInput(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void FilterInput(bool);
    void FilterInput(FilterInput const&);
    void FilterInput(char const*);
    void getInt(void)const;
    void getBool(void)const;
    void getFloat(void)const;
};
