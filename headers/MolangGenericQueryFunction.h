#pragma once

class MolangGenericQueryFunction {

public:

    void MolangGenericQueryFunction(std::function<MolangScriptArg ()(RenderParams &, std::vector<MolangScriptArg, std::allocator<MolangScriptArg>> const&)>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long, unsigned long);
    void MolangGenericQueryFunction(MolangGenericQueryFunction&&);
    void MolangGenericQueryFunction(MolangGenericQueryFunction const&);
};
