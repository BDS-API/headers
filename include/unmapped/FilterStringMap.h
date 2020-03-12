#pragma once

#include <initializer_list>


class FilterStringMap {

public:
    FilterStringMap(FilterStringMap const&);
    FilterStringMap(std::initializer_list<std::pair<std::string const, FilterInputDefinition>>);
    FilterStringMap();
    ~FilterStringMap();
};
