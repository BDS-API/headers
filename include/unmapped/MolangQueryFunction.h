#pragma once



class MolangQueryFunction {

public:

    MolangQueryFunction(std::function<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)>, std::string const&, unsigned long, unsigned long);
    MolangQueryFunction(MolangQueryFunction&&);
    MolangQueryFunction(MolangQueryFunction const&);
};
