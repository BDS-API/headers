#pragma once

#include <string>
#include "../../unmapped/FilterInput.h"


class FilterInputDefinition {

public:
    FilterInputDefinition(FilterInput, std::string const&); // _ZN21FilterInputDefinitionC2E11FilterInputRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ~FilterInputDefinition(); // _ZN21FilterInputDefinitionD2Ev
    FilterInputDefinition(int); // _ZN21FilterInputDefinitionC2Ei
    FilterInputDefinition(FilterInputDefinition const&); // _ZN21FilterInputDefinitionC2ERKS_
};
