#pragma once



using namespace FilterTest;

class Definition {

public:

    Definition(std::string const&, std::string const&, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, std::function<std::shared_ptr<FilterTest> ()(void)>);
    Definition(FilterTest::Definition&&);
};
