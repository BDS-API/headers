#pragma once

class Core::ExcludedPath {

public:

    void ExcludedPath(Core::ExcludedPath const&);
    void ExcludedPath(Core::ExcludedPath&&);
    void ExcludedPath(Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, bool);
};
