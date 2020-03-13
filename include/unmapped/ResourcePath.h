#pragma once

#include <string>


class ResourcePath {

public:
    ~ResourcePath(); // _ZN12ResourcePathD2Ev
    ResourcePath(std::string const&, std::string const&); // _ZN12ResourcePathC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    ResourcePath(ResourcePath &&); // _ZN12ResourcePathC2EOS_
};
