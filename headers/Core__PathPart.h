#pragma once

class Core::PathPart {

public:

    void PathPart(char const*, std::optional<unsigned long>);
    void PathPart(Core::Path);
    void size(void)const;
    void getUtf8CString(void)const;
    void PathPart(Core::PathPart const&);
    void PathPart(void);
    void PathPart(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void empty(void)const;
    void PathPart(Core::PathPart&&);
};
