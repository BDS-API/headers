#pragma once

#include <string>


class LoadedResourceData {

public:
    ~LoadedResourceData(); // _ZN18LoadedResourceDataD2Ev
    LoadedResourceData(int, std::string const&); // _ZN18LoadedResourceDataC2EiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    LoadedResourceData(LoadedResourceData &&); // _ZN18LoadedResourceDataC2EOS_
};
