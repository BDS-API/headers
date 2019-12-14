#pragma once

class Core::ExcludedPath {

public:

    void ExcludedPath(Core::ExcludedPath const&);
    void ExcludedPath(Core::ExcludedPath&&);
    void ExcludedPath(Core::PathBuffer<std::string>, bool);
};
