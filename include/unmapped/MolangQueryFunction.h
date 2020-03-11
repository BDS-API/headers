#pragma once

#include "./RenderParams.h"
#include <memory>
#include <vector>
#include "./MolangQueryFunction.h"
#include <functional>
#include <string>


class MolangQueryFunction {

public:

    MolangQueryFunction(std::function<float (RenderParams &, std::vector<float, std::allocator<float>> const&)>, std::string const&, unsigned long, unsigned long);
    ~MolangQueryFunction();
    MolangQueryFunction(MolangQueryFunction &&);
    MolangQueryFunction(MolangQueryFunction const&);
};
