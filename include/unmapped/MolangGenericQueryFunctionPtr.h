#pragma once

#include <functional>
#include "./MolangScriptArg.h"
#include "./HashedString.h"
#include <memory>
#include "./MolangGenericQueryFunctionPtr.h"
#include <vector>
#include "./RenderParams.h"


class MolangGenericQueryFunctionPtr {

public:
    static long defaultErrorValue;


    ~MolangGenericQueryFunctionPtr();
    MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr const&);
    MolangGenericQueryFunctionPtr(std::function<MolangScriptArg (RenderParams &, std::vector<MolangScriptArg, std::allocator<MolangScriptArg>> const&)> const*, HashedString const&);
    void getGenericQueryFunctionPtr()const;
    MolangGenericQueryFunctionPtr(MolangGenericQueryFunctionPtr &&);
    void operator==(MolangGenericQueryFunctionPtr const&)const;
};
