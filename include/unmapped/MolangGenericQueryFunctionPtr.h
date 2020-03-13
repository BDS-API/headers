#pragma once

#include "MolangScriptArg.h"
#include <functional>


class MolangGenericQueryFunctionPtr {

public:
    static long defaultErrorValue;

    ~MolangGenericQueryFunctionPtr(); // _ZN29MolangGenericQueryFunctionPtrD2Ev
    MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr const&); // _ZN29MolangGenericQueryFunctionPtrC2ERKS_
    MolangGenericQueryFunctionPtr(std::function<MolangScriptArg (RenderParams &, std::vector<MolangScriptArg> const&)> const*, HashedString const&); // _ZN29MolangGenericQueryFunctionPtrC2EPKSt8functionIF15MolangScriptArgR12RenderParamsRKSt6vectorIS1_SaIS1_EEEERK12HashedString
    void getGenericQueryFunctionPtr()const; // _ZNK29MolangGenericQueryFunctionPtr26getGenericQueryFunctionPtrEv
    MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr &&); // _ZN29MolangGenericQueryFunctionPtrC2EOS_
    void operator==(MolangGenericQueryFunctionPtr const&)const; // _ZNK29MolangGenericQueryFunctionPtreqERKS_
};
