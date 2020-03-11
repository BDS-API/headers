#pragma once

#include "../bedrock/definition/FilterParamDefinition.h"
#include "../bedrock/test/FilterTest.h"
#include <memory>
#include "./Definition.h"
#include <functional>
#include <string>


namespace FilterTest {

class Definition {

public:

//  Definition(std::string const&, std::string const&, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, FilterParamDefinition const*, std::function<std::shared_ptr<FilterTest> (void)>); //TODO: incomplete function definition
    ~Definition();
    Definition(FilterTest::Definition &&);
};

}