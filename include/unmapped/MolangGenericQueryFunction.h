#pragma once

#include "MolangScriptArg.h"
#include <string>
#include <functional>


class MolangGenericQueryFunction {

public:
    MolangGenericQueryFunction(std::function<MolangScriptArg (RenderParams &, std::vector<MolangScriptArg> const&)>, std::string const&, unsigned long, unsigned long);
    MolangGenericQueryFunction(MolangGenericQueryFunction &&);
    MolangGenericQueryFunction(MolangGenericQueryFunction const&);
    ~MolangGenericQueryFunction();
};
