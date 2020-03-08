#pragma once



using namespace Json;

class PathArgument {

public:

    PathArgument(void);
    PathArgument(unsigned int);
    PathArgument(char const*);
    PathArgument(std::string const&);
    PathArgument(Json::PathArgument&&);
    PathArgument(Json::PathArgument const&);
};
