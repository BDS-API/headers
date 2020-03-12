#pragma once

#include <string>


namespace Core {

    class ExcludedPath {

    public:
        ExcludedPath(Core::ExcludedPath const&);
        ExcludedPath(Core::ExcludedPath &&);
        ~ExcludedPath();
//      ExcludedPath(Core::PathBuffer<std::string>, bool); //TODO: incomplete function definition
    };
}
