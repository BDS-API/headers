#pragma once

#include "./LoadedResourceData.h"
#include <string>


class LoadedResourceData {

public:

    ~LoadedResourceData();
    LoadedResourceData(int, std::string const&);
    LoadedResourceData(LoadedResourceData &&);
};
