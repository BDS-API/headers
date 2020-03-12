#pragma once

#include <string>


namespace Json {

    class PathArgument {

    public:
        PathArgument(char const*);
        PathArgument(Json::PathArgument const&);
        PathArgument();
        PathArgument(Json::PathArgument &&);
        ~PathArgument();
        PathArgument(std::string const&);
        PathArgument(unsigned int);
    };
}
