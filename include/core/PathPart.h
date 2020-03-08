#pragma once



using namespace Core;

class PathPart {

public:

    PathPart(char const*, unsigned long);
    PathPart(gsl::not_null<char const*>, unsigned long);
    PathPart(Core::Path const&);
    void size(void)const;
    void getUtf8CString(void)const;
    PathPart(Core::PathPart const&);
    PathPart(void);
    PathPart(std::string &&);
    PathPart(char const*);
    PathPart(gsl::not_null<char const*>);
    PathPart(std::string const&);
    void empty(void)const;
    PathPart(Core::PathPart&&);
};
