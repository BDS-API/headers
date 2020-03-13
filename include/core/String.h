#pragma once

#include <string>


namespace Core {

    namespace String {

//      void toUtf8(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&); //TODO: incomplete function definition // _ZN4Core6String6toUtf8ERKNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEE
        std::string toWide(char const*); // _ZN4Core6String6toWideB5cxx11EPKc
//      std::string toUtf8(wchar_t const*); //TODO: incomplete function definition // _ZN4Core6String6toUtf8B5cxx11EPKw
    };
}
