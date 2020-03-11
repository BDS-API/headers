#pragma once

#include "../../unmapped/FilterInput.h"
#include "./FilterInputDefinition.h"
#include <string>


class FilterInputDefinition {

public:

    FilterInputDefinition(FilterInput, std::string const&);
    ~FilterInputDefinition();
    FilterInputDefinition(int);
    FilterInputDefinition(FilterInputDefinition const&);
};
