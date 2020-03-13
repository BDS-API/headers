#pragma once

#include <string>
#include "MolangScriptArg.h"
#include <functional>


class MolangGenericQueryFunction {

public:
    MolangGenericQueryFunction(std::function<MolangScriptArg (RenderParams &, std::vector<MolangScriptArg> const&)>, std::string const&, unsigned long, unsigned long); // _ZN26MolangGenericQueryFunctionC2ESt8functionIF15MolangScriptArgR12RenderParamsRKSt6vectorIS1_SaIS1_EEEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmm
    ~MolangGenericQueryFunction(); // _ZN26MolangGenericQueryFunctionD2Ev
    MolangGenericQueryFunction(MolangGenericQueryFunction &&); // _ZN26MolangGenericQueryFunctionC2EOS_
    MolangGenericQueryFunction(MolangGenericQueryFunction const&); // _ZN26MolangGenericQueryFunctionC2ERKS_
};
