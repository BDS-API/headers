#pragma once

#include "RenderParams.h"
#include <functional>
#include <vector>
#include <string>


class MolangQueryFunction {

public:
    ~MolangQueryFunction();
    MolangQueryFunction(MolangQueryFunction const&);
    MolangQueryFunction(MolangQueryFunction &&);
    MolangQueryFunction(std::function<float (RenderParams &, std::vector<float> const&)>, std::string const&, unsigned long, unsigned long);
};
