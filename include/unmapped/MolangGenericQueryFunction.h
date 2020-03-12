#pragma once

#include <string>
#include "RenderParams.h"
#include "MolangScriptArg.h"
#include <functional>
#include <vector>


class MolangGenericQueryFunction {

public:
    MolangGenericQueryFunction(MolangGenericQueryFunction const&);
    MolangGenericQueryFunction(std::function<MolangScriptArg (RenderParams &, std::vector<MolangScriptArg> const&)>, std::string const&, unsigned long, unsigned long);
    MolangGenericQueryFunction(MolangGenericQueryFunction &&);
    ~MolangGenericQueryFunction();
};
