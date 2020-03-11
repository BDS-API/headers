#pragma once

#include "./ResourcePath.h"
#include <string>


class ResourcePath {

public:

    ~ResourcePath();
    ResourcePath(std::string const&, std::string const&);
    ResourcePath(ResourcePath &&);
};
