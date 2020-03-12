#pragma once

#include <string>


namespace Json {

    class PathArgument {

    public:
        PathArgument();
        PathArgument(Json::PathArgument const&);
        PathArgument(unsigned int);
        PathArgument(char const*);
        PathArgument(std::string const&);
        ~PathArgument();
        PathArgument(Json::PathArgument &&);
    };
}
