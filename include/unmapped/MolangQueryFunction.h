#pragma once

#include <string>
#include <functional>


class MolangQueryFunction {

public:
    MolangQueryFunction(std::function<float (RenderParams &, std::vector<float> const&)>, std::string const&, unsigned long, unsigned long); // _ZN19MolangQueryFunctionC2ESt8functionIFfR12RenderParamsRKSt6vectorIfSaIfEEEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmm
    ~MolangQueryFunction(); // _ZN19MolangQueryFunctionD2Ev
    MolangQueryFunction(MolangQueryFunction &&); // _ZN19MolangQueryFunctionC2EOS_
    MolangQueryFunction(MolangQueryFunction const&); // _ZN19MolangQueryFunctionC2ERKS_
};
