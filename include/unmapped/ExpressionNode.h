#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <functional>
#include "MolangScriptArg.h"


class ExpressionNode {

public:
    static long mQueryFunctionAccessors;
    static long mGenericQueryFunctionAccessors;
    static long _defaultUnknownQueryFunction;
    static long _defaultUnknownGenericQueryFunction;
    static long mTemporaryMolangEvalParams;
    static long mMolangInitialized;
    static std::string mExpressionOpTokens;

};
