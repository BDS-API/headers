#pragma once

#include <functional>
#include "./HashedString.h"
#include <memory>
#include <vector>
#include "./MolangQueryFunctionPtr.h"
#include "./RenderParams.h"


class MolangQueryFunctionPtr {

public:
    static long defaultErrorValue;


    ~MolangQueryFunctionPtr();
    MolangQueryFunctionPtr(MolangQueryFunctionPtr const&);
    MolangQueryFunctionPtr(std::function<float (RenderParams &, std::vector<float, std::allocator<float>> const&)> const*, HashedString const&);
    void getQueryFunctionPtr()const;
    MolangQueryFunctionPtr(MolangQueryFunctionPtr &&);
    void operator==(MolangQueryFunctionPtr const&)const;
};
