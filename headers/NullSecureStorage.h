#pragma once

class NullSecureStorage : SecureStorage {

    virtual void Null~NullSecureStorage();
    virtual void Null~NullSecureStorage();
    virtual void Nulladd(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void NulladdOrUpdate(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void Nullremove(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void Nullget(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&);
}
