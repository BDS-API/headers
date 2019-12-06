#pragma once

class MolangGenericQueryFunctionPtr {

public:
    static long MolangGenericQueryFunctionPtr::defaultErrorValue;


    void MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr const&);
    void MolangGenericQueryFunctionPtr(std::function<MolangScriptArg ()(RenderParams &, std::vector<MolangScriptArg, std::allocator<MolangScriptArg>> const&)> const*, HashedString const&);
    void getGenericQueryFunctionPtr(void)const;
    void MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr&&);
};
