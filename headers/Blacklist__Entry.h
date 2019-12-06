#pragma once

class Blacklist::Entry {

public:

    void Entry(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void Entry(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Blacklist::Duration const&);
    void Entry(Blacklist::Entry const&);
    void Entry(Blacklist::Entry&&);
};
