#pragma once

#include <functional>
#include "./MolangGenericQueryFunction.h"
#include "./MolangScriptArg.h"
#include <memory>
#include <vector>
#include "./RenderParams.h"
#include <string>


class MolangGenericQueryFunction {

public:

    MolangGenericQueryFunction(std::function<MolangScriptArg (RenderParams &, std::vector<MolangScriptArg, std::allocator<MolangScriptArg>> const&)>, std::string const&, unsigned long, unsigned long);
    ~MolangGenericQueryFunction();
    MolangGenericQueryFunction(MolangGenericQueryFunction &&);
    MolangGenericQueryFunction(MolangGenericQueryFunction const&);
};
