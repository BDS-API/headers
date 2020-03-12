#pragma once

#include <string>


class LoadedResourceData {

public:
    LoadedResourceData(LoadedResourceData &&);
    ~LoadedResourceData();
    LoadedResourceData(int, std::string const&);
};
