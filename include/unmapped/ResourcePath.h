#pragma once

#include <string>


class ResourcePath {

public:
    ResourcePath(ResourcePath &&);
    ResourcePath(std::string const&, std::string const&);
    ~ResourcePath();
};
