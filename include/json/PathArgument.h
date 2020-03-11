#pragma once

#include "./PathArgument.h"
#include <string>


namespace Json {

class PathArgument {

public:

    PathArgument();
    PathArgument(unsigned int);
    PathArgument(char const*);
    PathArgument(std::string const&);
    ~PathArgument();
    PathArgument(Json::PathArgument &&);
    PathArgument(Json::PathArgument const&);
};

}