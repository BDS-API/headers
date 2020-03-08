#pragma once



using namespace Core;

class PathPart {

public:

    PathPart(char const*, unsigned long);
    PathPart(gsl::not_null<char const*>, unsigned long);
    PathPart(Core::Path const&);
    void size()const;
    void getUtf8CString()const;
    PathPart(Core::PathPart const&);
    PathPart(void);
    PathPart(std::string &&);
    PathPart(char const*);
    PathPart(gsl::not_null<char const*>);
    PathPart(std::string const&);
    void empty()const;
    PathPart(Core::PathPart&&);
};
