#pragma once

class SecureStorage {

    virtual void ~SecureStorage();
    virtual void ~SecureStorage();
    virtual void add(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void addOrUpdate(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void remove(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void get(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&);
}
