#pragma once

class Json::PathArgument {

public:

    void PathArgument(void);
    void PathArgument(unsigned int);
    void PathArgument(char const*);
    void PathArgument(std::string const&);
    void PathArgument(Json::PathArgument&&);
    void PathArgument(Json::PathArgument const&);
};
