#pragma once

#include "RenderParams.h"
#include "MolangScriptArg.h"
#include <functional>
#include <vector>
#include "HashedString.h"


class MolangGenericQueryFunctionPtr {

public:
    static long defaultErrorValue;

    void operator==(MolangGenericQueryFunctionPtr const&)const;
    MolangGenericQueryFunctionPtr(std::function<MolangScriptArg (RenderParams &, std::vector<MolangScriptArg> const&)> const*, HashedString const&);
    MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr const&);
    ~MolangGenericQueryFunctionPtr();
    void getGenericQueryFunctionPtr()const;
    MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr &&);
};
