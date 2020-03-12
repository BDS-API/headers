#pragma once

#include "MolangScriptArg.h"
#include <functional>


class MolangGenericQueryFunctionPtr {

public:
    static long defaultErrorValue;

    void operator==(MolangGenericQueryFunctionPtr const&)const;
    void getGenericQueryFunctionPtr()const;
    MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr &&);
    ~MolangGenericQueryFunctionPtr();
    MolangGenericQueryFunctionPtr(std::function<MolangScriptArg (RenderParams &, std::vector<MolangScriptArg> const&)> const*, HashedString const&);
    MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr const&);
};
