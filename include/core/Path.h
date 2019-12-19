#pragma once

using namespace Core;

class Path {

public:

    Path(Core::Path const&);
    void getUtf8StringSpan(void)const;
    void getUtf8CString(void)const;
    void size(void)const;
    Path(void);
    Path(char const*, std::optional<unsigned long>);
    void empty(void)const;
    Path(std::string const&);
    bool isDotOrDotDot(void)const;
};
