#pragma once

#include <string>
#include "Path.h"


namespace Core {

    class PathPart {

    public:
        PathPart(std::string &&);
        PathPart(Core::PathPart &&);
        PathPart();
        void operator==(Core::PathPart const&)const;
//      PathPart(gsl::not_null<char const*>, unsigned long); //TODO: incomplete function definition
        void operator!=(Core::PathPart const&)const;
        void size()const;
        PathPart(char const*, unsigned long);
        PathPart(char const*);
        void empty()const;
        void getUtf8CString()const;
        PathPart(Core::PathPart const&);
        PathPart(std::string const&);
//      PathPart(gsl::not_null<char const*>); //TODO: incomplete function definition
        PathPart(Core::Path const&);
        ~PathPart();
        std::string getUtf8StdString()const;
    };
}
