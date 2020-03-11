#pragma once

#include "./Path.h"
#include <string>


namespace Core {

class Path {

public:

    ~Path();
    std::string getUtf8StdString()const;
    void getUtf8StringSpan()const;
    Path();
    Path(std::string &&);
    void getUtf8CString()const;
    void size()const;
    Path(Core::Path const&);
    void empty()const;
    Path(std::string const&);
    Path(char const*);
    Path(Core::Path &&);
    void operator!=(Core::Path const&)const;
    void operator==(Core::Path const&)const;
    bool isDotOrDotDot()const;
};

}