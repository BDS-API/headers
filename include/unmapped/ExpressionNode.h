#pragma once

#include <string>
#include <unordered_map>
#include "MaterialVariants.h"
#include "EvalParams.h"
#include "../json/Value.h"
#include "RenderParams.h"
#include "MolangScriptArg.h"
#include <functional>
#include <vector>
#include <memory>
#include "HashedString.h"
#include <utility>


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
