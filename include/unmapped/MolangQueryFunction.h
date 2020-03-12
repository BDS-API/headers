#pragma once

#include <string>
#include <functional>


class MolangQueryFunction {

public:
    MolangQueryFunction(MolangQueryFunction &&);
    MolangQueryFunction(MolangQueryFunction const&);
    MolangQueryFunction(std::function<float (RenderParams &, std::vector<float> const&)>, std::string const&, unsigned long, unsigned long);
    ~MolangQueryFunction();
};
