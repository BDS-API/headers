#pragma once

#include "./ExcludedPath.h"
#include <string>


namespace Core {

class ExcludedPath {

public:

    ~ExcludedPath();
    ExcludedPath(Core::ExcludedPath const&);
    ExcludedPath(Core::ExcludedPath &&);
//  ExcludedPath(Core::PathBuffer<std::string>, bool); //TODO: incomplete function definition
};

}