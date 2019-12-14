#pragma once

class FilterTest::Definition {

public:

    void Definition(std::string const&, std::string const&, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, std::function<std::shared_ptr<FilterTest> ()(void)>);
    void Definition(FilterTest::Definition&&);
};
