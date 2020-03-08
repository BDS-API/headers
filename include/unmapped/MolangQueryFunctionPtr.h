#pragma once



class MolangQueryFunctionPtr {

public:
    static long defaultErrorValue;


    MolangQueryFunctionPtr(MolangQueryFunctionPtr const&);
    MolangQueryFunctionPtr(std::function<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)> const*, HashedString const&);
    void getQueryFunctionPtr()const;
    MolangQueryFunctionPtr(MolangQueryFunctionPtr&&);
};
