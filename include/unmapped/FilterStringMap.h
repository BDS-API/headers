#pragma once

#include <initializer_list>
#include <string>
#include "../bedrock/definition/FilterInputDefinition.h"
#include <utility>


class FilterStringMap {

public:
    FilterStringMap(FilterStringMap const&);
    FilterStringMap();
    FilterStringMap(std::initializer_list<std::pair<std::string const, FilterInputDefinition>>);
    ~FilterStringMap();
};
