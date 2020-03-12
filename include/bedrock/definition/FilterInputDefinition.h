#pragma once

#include <string>
#include "../../unmapped/FilterInput.h"


class FilterInputDefinition {

public:
    FilterInputDefinition(FilterInputDefinition const&);
    FilterInputDefinition(FilterInput, std::string const&);
    FilterInputDefinition(int);
    ~FilterInputDefinition();
};
