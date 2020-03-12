#pragma once

#include <string>


namespace Core {

    class Path {

    public:
        std::string getUtf8StdString()const;
        Path(Core::Path &&);
        Path(Core::Path const&);
        void empty()const;
        ~Path();
        void getUtf8CString()const;
        void size()const;
        Path(std::string const&);
        Path(char const*);
        bool isDotOrDotDot()const;
        Path(std::string &&);
        void operator!=(Core::Path const&)const;
        Path();
        void operator==(Core::Path const&)const;
        void getUtf8StringSpan()const;
    };
}
