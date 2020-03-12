#pragma once

#include <functional>


class MolangQueryFunctionPtr {

public:
    static long defaultErrorValue;

    void getQueryFunctionPtr()const;
    MolangQueryFunctionPtr(MolangQueryFunctionPtr const&);
    void operator==(MolangQueryFunctionPtr const&)const;
    ~MolangQueryFunctionPtr();
    MolangQueryFunctionPtr(MolangQueryFunctionPtr &&);
    MolangQueryFunctionPtr(std::function<float (RenderParams &, std::vector<float> const&)> const*, HashedString const&);
};
