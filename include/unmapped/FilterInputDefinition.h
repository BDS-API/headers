#pragma once

class FilterInputDefinition {

public:

    FilterInputDefinition(FilterInput, std::string const&);
    FilterInputDefinition(int);
    FilterInputDefinition(FilterInputDefinition const&);
};
