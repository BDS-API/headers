#pragma once

#include <memory>
#include <string>


namespace Core {

class String {

public:

//  void toUtf8(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&); //TODO: incomplete function definition
    std::string toWide(char const*);
//  std::string toUtf8(wchar_t const*); //TODO: incomplete function definition
};

}