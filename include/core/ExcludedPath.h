#pragma once



namespace Core {

    class ExcludedPath {

    public:
        ExcludedPath(Core::ExcludedPath const&);
        ~ExcludedPath();
//      ExcludedPath(Core::PathBuffer<std::string>, bool); //TODO: incomplete function definition
        ExcludedPath(Core::ExcludedPath &&);
    };
}
