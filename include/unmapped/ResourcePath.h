#pragma once

#include <string>


class ResourcePath {

public:
    ResourcePath(std::string const&, std::string const&);
    ~ResourcePath();
    ResourcePath(ResourcePath &&);
};
