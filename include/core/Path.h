#pragma once

using namespace Core;

class Path {

public:

    void getUtf8StringSpan(void)const;
    Path(void);
    Path(std::string &&);
    void getUtf8CString(void)const;
    void size(void)const;
    Path(Core::Path const&);
    void empty(void)const;
    Path(std::string const&);
    Path(char const*);
    Path(Core::Path&&);
    bool isDotOrDotDot(void)const;
};
