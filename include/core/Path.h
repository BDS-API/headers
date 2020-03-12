#pragma once

#include <string>


namespace Core {

    class Path {

    public:
        void getUtf8CString()const;
        std::string getUtf8StdString()const;
        Path(std::string &&);
        ~Path();
        void empty()const;
        Path();
        Path(char const*);
        void operator==(Core::Path const&)const;
        void size()const;
        Path(Core::Path const&);
        Path(std::string const&);
        void operator!=(Core::Path const&)const;
        void getUtf8StringSpan()const;
        bool isDotOrDotDot()const;
        Path(Core::Path &&);
    };
}
