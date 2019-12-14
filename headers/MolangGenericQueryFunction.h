#pragma once

class MolangGenericQueryFunction {

public:

    void MolangGenericQueryFunction(std::function<MolangScriptArg ()(RenderParams &, std::vector<MolangScriptArg, std::allocator<MolangScriptArg>> const&)>, std::string const&, unsigned long, unsigned long);
    void MolangGenericQueryFunction(MolangGenericQueryFunction&&);
    void MolangGenericQueryFunction(MolangGenericQueryFunction const&);
};
