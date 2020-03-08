#pragma once



using namespace Core;

class ExcludedPath {

public:

    ExcludedPath(Core::ExcludedPath const&);
    ExcludedPath(Core::ExcludedPath&&);
    ExcludedPath(Core::PathBuffer<std::string>, bool);
};
