#pragma once

class Json::PathArgument {

public:

    void PathArgument(void);
    void PathArgument(unsigned int);
    void PathArgument(char const*);
    void PathArgument(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void PathArgument(Json::PathArgument&&);
    void PathArgument(Json::PathArgument const&);
};
