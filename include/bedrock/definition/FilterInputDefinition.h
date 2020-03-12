#pragma once

#include "../../unmapped/FilterInput.h"
#include <string>


class FilterInputDefinition {

public:
    FilterInputDefinition(int);
    FilterInputDefinition(FilterInputDefinition const&);
    ~FilterInputDefinition();
    FilterInputDefinition(FilterInput, std::string const&);
};
