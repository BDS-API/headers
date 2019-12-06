#pragma once

class Core::Path {

public:

    void Path(Core::Path const&);
    void getUtf8StringSpan(void)const;
    void getUtf8CString(void)const;
    void size(void)const;
    void Path(void);
    void Path(char const*, std::optional<unsigned long>);
    void empty(void)const;
    void Path(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool isDotOrDotDot(void)const;
};
