#pragma once

class FilterStringMap {

public:

    void FilterStringMap(std::initializer_list<std::pair<std::string const, FilterInputDefinition>>);
    void FilterStringMap(void);
    void FilterStringMap(FilterStringMap const&);
};
