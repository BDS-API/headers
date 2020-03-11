#pragma once

#include "./ExpressionNode.h"
#include <utility>
#include <unordered_map>
#include "./EvalParams.h"
#include "./MolangScriptArg.h"
#include "./RenderParams.h"
#include "./HashedString.h"
#include "../json/Value.h"
#include <memory>
#include <vector>
#include "./MaterialVariants.h"
#include <functional>
#include <string>


class ExpressionNode {

public:
    static long mQueryFunctionAccessors;
    static long mGenericQueryFunctionAccessors;
    static long _defaultUnknownQueryFunction;
    static long _defaultUnknownGenericQueryFunction;
    static long mTemporaryMolangEvalParams;
    static long mMolangInitialized;
    static std::string mExpressionOpTokens;


    ~ExpressionNode();
    ExpressionNode(ExpressionNode const&);
    void evalAsFloat(RenderParams &, float)const;
    void evalAsFloat(RenderParams &)const;
    ExpressionNode(ExpressionNode &&);
    void initializeMolang();
    void addErrorMessage(std::string const&);
    void registerQueryFunction(std::string const&, std::function<float (RenderParams &, std::vector<float, std::allocator<float>> const&)>, std::string const&, unsigned long, unsigned long);
    void getQueryFunctionMutex();
    void registerGenericQueryFunction(std::string const&, std::function<MolangScriptArg (RenderParams &, std::vector<MolangScriptArg, std::allocator<MolangScriptArg>> const&)>, std::string const&, unsigned long, unsigned long);
    void getQueryFunctionAccessors();
    void getGenericQueryFunctionAccessors();
    std::string getSortedQueryFunctionAccessors();
    std::string getSortedGenericQueryFunctionAccessors();
    std::string getQueryFunctionDocumentation();
    ExpressionNode();
    ExpressionNode(float);
//  ExpressionNode(MolangScriptArg &, ExpressionOp); //TODO: incomplete function definition
    ExpressionNode(MaterialVariants const&);
    ExpressionNode(char const*, std::function<std::function const* (RenderParams &, std::vector<float, std::allocator<float>> const&)> (std::string const&, bool));
    void parse(std::string const&, std::function<std::function const* (RenderParams &, std::vector<float, std::allocator<float>> const&)> (std::string const&, bool));
    ExpressionNode(std::string const&, std::function<std::function const* (RenderParams &, std::vector<float, std::allocator<float>> const&)> (std::string const&, bool));
    ExpressionNode(Json::Value const&, std::function<std::function const* (RenderParams &, std::vector<float, std::allocator<float>> const&)> (std::string const&, bool));
    void clear();
    void operator==(ExpressionNode const&)const;
    void operator!=(ExpressionNode const&)const;
    std::string getExpressionString();
    void setExpressionString(std::string const&);
    void toJson()const;
//  void replaceArrayVariables(std::unordered_map<HashedString, ExpressionNode, std::hash<HashedString>, std::equal_to<HashedString>, std::allocator<std::pair<HashedString const, ExpressionNode>>> &); //TODO: incomplete function definition
    void validateArrayVariables();
    void optimize();
    void optimizeFunctionCallParams();
    void _checkIsValidAndPopulateUsedTokenFlags(unsigned long);
    bool isValid()const;
    bool isBinaryExpression()const;
//  void contains(ExpressionOp)const; //TODO: incomplete function definition
    bool isInitialized()const;
    void evalGeneric(RenderParams &)const;
    void evalGeneric(RenderParams &, MolangScriptArg const&, EvalParams &)const;
    void evalGeneric(RenderParams &, MolangScriptArg const&)const;
    void _evalAsFloat()const;
    void _evalAsFloat(RenderParams &)const;
    void _evalAsFloat(RenderParams &, float)const;
    void _evalAsFloat(RenderParams &, float, EvalParams &)const;
//  void findFirstNodeByOp(ExpressionOp)const; //TODO: incomplete function definition
//  void collect(ExpressionOp)const; //TODO: incomplete function definition
//  void _collect(ExpressionOp, std::vector<ExpressionNode const*, std::allocator<ExpressionNode const*>> &)const; //TODO: incomplete function definition
    void buildExpressionOpTable();
    void fast_atof_positiveOnly(char const*&);
    void fast_identifier(char const*&);
    void fast_singleQuotedString(char const*&);
    void _getToken(char const*&, std::function<std::function const* (RenderParams &, std::vector<float, std::allocator<float>> const&)> (std::string const&, bool));
    void tokenize(char const*, unsigned long &, std::function<std::function const* (RenderParams &, std::vector<float, std::allocator<float>> const&)> (std::string const&, bool));
    void buildTree(unsigned long, std::function<std::function const* (RenderParams &, std::vector<float, std::allocator<float>> const&)> (std::string const&, bool));
    bool processSections();
    bool processParamsAndVariables();
    bool processSemicolons();
    bool processArrays();
    bool processMathFuncs();
    bool processNegatives();
//  bool processBinaryExpression(ExpressionOp); //TODO: incomplete function definition
//  bool processUnaryExpression(ExpressionOp); //TODO: incomplete function definition
    bool hasSubExpressions()const;
//  void findClosingOp(unsigned long &, ExpressionOp)const; //TODO: incomplete function definition
    void queryFunctionAccessorFromString(std::string const&, bool);
    void genericQueryFunctionAccessorFromString(std::string const&, bool);
    void evalAsFloat(RenderParams &, float, EvalParams &)const;
};
