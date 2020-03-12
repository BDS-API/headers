#pragma once

#include "HashedString.h"
#include <functional>
#include <vector>
#include "RenderParams.h"


class MolangQueryFunctionPtr {

public:
    static long defaultErrorValue;

    MolangQueryFunctionPtr(MolangQueryFunctionPtr const&);
    MolangQueryFunctionPtr(std::function<float (RenderParams &, std::vector<float> const&)> const*, HashedString const&);
    void getQueryFunctionPtr()const;
    ~MolangQueryFunctionPtr();
    MolangQueryFunctionPtr(MolangQueryFunctionPtr &&);
    void operator==(MolangQueryFunctionPtr const&)const;
};
