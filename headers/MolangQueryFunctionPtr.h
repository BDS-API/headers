#pragma once

class MolangQueryFunctionPtr {

public:
    static long defaultErrorValue;


    void MolangQueryFunctionPtr(MolangQueryFunctionPtr const&);
    void MolangQueryFunctionPtr(std::function<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)> const*, HashedString const&);
    void getQueryFunctionPtr(void)const;
    void MolangQueryFunctionPtr(MolangQueryFunctionPtr&&);
};
