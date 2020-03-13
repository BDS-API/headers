#pragma once

#include <initializer_list>


class FilterStringMap {

public:
    FilterStringMap(std::initializer_list<std::pair<std::string const, FilterInputDefinition>>); // _ZN15FilterStringMapC2ESt16initializer_listISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE21FilterInputDefinitionEE
    ~FilterStringMap(); // _ZN15FilterStringMapD2Ev
    FilterStringMap(); // _ZN15FilterStringMapC2Ev
    FilterStringMap(FilterStringMap const&); // _ZN15FilterStringMapC2ERKS_
};
