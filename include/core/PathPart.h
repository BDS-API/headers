#pragma once

#include <string>


namespace Core {

    class PathPart {

    public:
        void size()const;
//      PathPart(gsl::not_null<char const*>); //TODO: incomplete function definition
        PathPart();
        void operator==(Core::PathPart const&)const;
        ~PathPart();
        void getUtf8CString()const;
        PathPart(Core::PathPart const&);
        PathPart(std::string const&);
        void empty()const;
        PathPart(char const*);
        PathPart(Core::PathPart &&);
//      PathPart(gsl::not_null<char const*>, unsigned long); //TODO: incomplete function definition
        void operator!=(Core::PathPart const&)const;
        std::string getUtf8StdString()const;
        PathPart(char const*, unsigned long);
        PathPart(std::string &&);
        PathPart(Core::Path const&);
    };
}
