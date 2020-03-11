#pragma once

#include <utility>
#include "./FilterStringMap.h"
#include "../bedrock/definition/FilterInputDefinition.h"
#include <initializer_list>
#include <string>


class FilterStringMap {

public:

    FilterStringMap(std::initializer_list<std::pair<std::string const, FilterInputDefinition>>);
    ~FilterStringMap();
    FilterStringMap();
    FilterStringMap(FilterStringMap const&);
};
