#pragma once

class FilterInputDefinition {

public:

    void FilterInputDefinition(FilterInput, std::string const&);
    void FilterInputDefinition(int);
    void FilterInputDefinition(FilterInputDefinition const&);
};
