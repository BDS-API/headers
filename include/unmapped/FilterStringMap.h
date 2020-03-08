#pragma once

#include "../bedrock/definition/FilterInputDefinition"


class FilterStringMap {

public:

    FilterStringMap(std::initializer_list<std::pair<std::string const, FilterInputDefinition>>);
    FilterStringMap(void);
    FilterStringMap(FilterStringMap const&);
};
