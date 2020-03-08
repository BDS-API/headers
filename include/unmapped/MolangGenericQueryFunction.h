#pragma once



class MolangGenericQueryFunction {

public:

    MolangGenericQueryFunction(std::function<MolangScriptArg ()(RenderParams &, std::vector<MolangScriptArg, std::allocator<MolangScriptArg>> const&)>, std::string const&, unsigned long, unsigned long);
    MolangGenericQueryFunction(MolangGenericQueryFunction&&);
    MolangGenericQueryFunction(MolangGenericQueryFunction const&);
};
