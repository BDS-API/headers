#pragma once

using namespace Core;

class PathPart {

public:

    PathPart(char const*, std::optional<unsigned long>);
    PathPart(Core::Path);
    void size(void)const;
    void getUtf8CString(void)const;
    PathPart(Core::PathPart const&);
    PathPart(void);
    PathPart(std::string const&);
    void empty(void)const;
    PathPart(Core::PathPart&&);
};
