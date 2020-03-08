#pragma once



class MolangGenericQueryFunctionPtr {

public:
    static long defaultErrorValue;


    MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr const&);
    MolangGenericQueryFunctionPtr(std::function<MolangScriptArg ()(RenderParams &, std::vector<MolangScriptArg, std::allocator<MolangScriptArg>> const&)> const*, HashedString const&);
    void getGenericQueryFunctionPtr()const;
    MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr&&);
};
