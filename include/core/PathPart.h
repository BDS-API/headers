#pragma once

#include "./Path.h"
#include "./PathPart.h"
#include <string>


namespace Core {

class PathPart {

public:

    ~PathPart();
    PathPart(char const*, unsigned long);
//  PathPart(gsl::not_null<char const*>, unsigned long); //TODO: incomplete function definition
    PathPart(Core::Path const&);
    void size()const;
    void getUtf8CString()const;
    std::string getUtf8StdString()const;
    PathPart(Core::PathPart const&);
    PathPart();
    PathPart(std::string &&);
    PathPart(char const*);
//  PathPart(gsl::not_null<char const*>); //TODO: incomplete function definition
    PathPart(std::string const&);
    void empty()const;
    PathPart(Core::PathPart &&);
    void operator==(Core::PathPart const&)const;
    void operator!=(Core::PathPart const&)const;
};

}