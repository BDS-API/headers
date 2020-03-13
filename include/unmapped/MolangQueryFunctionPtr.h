#pragma once

#include <functional>


class MolangQueryFunctionPtr {

public:
    static long defaultErrorValue;

    ~MolangQueryFunctionPtr(); // _ZN22MolangQueryFunctionPtrD2Ev
    MolangQueryFunctionPtr(MolangQueryFunctionPtr const&); // _ZN22MolangQueryFunctionPtrC2ERKS_
    MolangQueryFunctionPtr(std::function<float (RenderParams &, std::vector<float> const&)> const*, HashedString const&); // _ZN22MolangQueryFunctionPtrC2EPKSt8functionIFfR12RenderParamsRKSt6vectorIfSaIfEEEERK12HashedString
    void getQueryFunctionPtr()const; // _ZNK22MolangQueryFunctionPtr19getQueryFunctionPtrEv
    MolangQueryFunctionPtr(MolangQueryFunctionPtr &&); // _ZN22MolangQueryFunctionPtrC2EOS_
    void operator==(MolangQueryFunctionPtr const&)const; // _ZNK22MolangQueryFunctionPtreqERKS_
};
