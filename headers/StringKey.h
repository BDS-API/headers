#pragma once

class StringKey {

public:

    void StringKey(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void StringKey(StringKey&&);
    void StringKey(HashedString const&);
    void StringKey(void);
    void StringKey(StringKey const&);
};
