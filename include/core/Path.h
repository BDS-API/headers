#pragma once



using namespace Core;

class Path {

public:

    void getUtf8StringSpan()const;
    Path(void);
    Path(std::string &&);
    void getUtf8CString()const;
    void size()const;
    Path(Core::Path const&);
    void empty()const;
    Path(std::string const&);
    Path(char const*);
    Path(Core::Path&&);
    bool isDotOrDotDot()const;
};
