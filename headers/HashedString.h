#pragma once

class HashedString {

public:
    static long HashedString::defaultErrorValue;


    void HashedString(void);
    void getEmptyString(void);
    void HashedString(HashedString const&);
    void HashedString(HashedString&&);
    void HashedString(decltype(nullptr));
    void computeHash(char const*);
    void computeHash(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void HashedString(char const*);
    void HashedString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void HashedString(unsigned long, char const*);
    void HashedString(unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    bool isEmpty(void)const;
    void empty(void)const;
    void clear(void);
    void getHash(void)const;
    void c_str(void)const;
};
