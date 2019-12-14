#pragma once

class MolangQueryFunction {

public:

    void MolangQueryFunction(std::function<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)>, std::string const&, unsigned long, unsigned long);
    void MolangQueryFunction(MolangQueryFunction&&);
    void MolangQueryFunction(MolangQueryFunction const&);
};
