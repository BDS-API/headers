#pragma once

#include "../../unmapped/FilterInput"


class FilterInputDefinition {

public:

    FilterInputDefinition(FilterInput, std::string const&);
    FilterInputDefinition(int);
    FilterInputDefinition(FilterInputDefinition const&);
};
