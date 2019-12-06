#pragma once

class ExpressionNode {

public:
    static long ExpressionNode::mQueryFunctionAccessors;
    static long ExpressionNode::mGenericQueryFunctionAccessors;
    static long ExpressionNode::_defaultUnknownQueryFunction;
    static long ExpressionNode::_defaultUnknownGenericQueryFunction;
    static long ExpressionNode::mTemporaryMolangEvalParams;
    static long ExpressionNode::mMolangInitialized;


    void ExpressionNode(ExpressionNode const&);
    void evalAsFloat(RenderParams &, float)const;
    void evalAsFloat(RenderParams &)const;
    void ExpressionNode(ExpressionNode&&);
    void initializeMolang(void);
    void addErrorMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void registerQueryFunction(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long, unsigned long);
    void getQueryFunctionMutex(void);
    void registerGenericQueryFunction(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<MolangScriptArg ()(RenderParams &, std::vector<MolangScriptArg, std::allocator<MolangScriptArg>> const&)>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long, unsigned long);
    void getQueryFunctionAccessors(void);
    void getGenericQueryFunctionAccessors(void);
    void ExpressionNode(void);
    void ExpressionNode(float);
    void ExpressionNode(MolangScriptArg &, ExpressionOp);
    void ExpressionNode(MaterialVariants const&);
    void ExpressionNode(char const*, std::function<std::function const*<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>, std::function<std::function const*<MolangScriptArg ()(std::function const*, RenderParams const&<std::function const, std::allocator<std::function const>>)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>);
    void parse(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<std::function const*<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>, std::function<std::function const*<MolangScriptArg ()(std::function const*, RenderParams const&<std::function const, std::allocator<std::function const>>)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>);
    void ExpressionNode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<std::function const*<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>, std::function<std::function const*<MolangScriptArg ()(std::function const*, RenderParams const&<std::function const, std::allocator<std::function const>>)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>);
    void ExpressionNode(Json::Value const&, std::function<std::function const*<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>, std::function<std::function const*<MolangScriptArg ()(std::function const*, RenderParams const&<std::function const, std::allocator<std::function const>>)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>);
    void clear(void);
    void setExpressionString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void toJson(void)const;
    void replaceArrayVariables(std::unordered_map<HashedString, ExpressionNode, std::hash<HashedString>, std::equal_to<HashedString>, std::allocator<std::pair<HashedString const, ExpressionNode>>> &);
    void validateArrayVariables(void);
    void optimize(void);
    void optimizeFunctionCallParams(void);
    void _checkIsValidAndPopulateUsedTokenFlags(unsigned long);
    bool isValid(void)const;
    bool isBinaryExpression(void)const;
    void contains(ExpressionOp)const;
    bool isInitialized(void)const;
    void evalGeneric(RenderParams &)const;
    void evalGeneric(RenderParams &, MolangScriptArg const&, EvalParams &)const;
    void evalGeneric(RenderParams &, MolangScriptArg const&)const;
    void _evalAsFloat(void)const;
    void _evalAsFloat(RenderParams &)const;
    void _evalAsFloat(RenderParams &, float)const;
    void _evalAsFloat(RenderParams &, float, EvalParams &)const;
    void findFirstNodeByOp(ExpressionOp)const;
    void collect(ExpressionOp)const;
    void _collect(ExpressionOp, std::vector<ExpressionNode const*, std::allocator<ExpressionNode const*>> &)const;
    void buildExpressionOpTable(void);
    void fast_atof_positiveOnly(char const*&);
    void fast_identifier(char const*&);
    void fast_singleQuotedString(char const*&);
    void _getToken(char const*&, std::function<std::function const*<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>, std::function<std::function const*<MolangScriptArg ()(std::function const*, RenderParams const&<std::function const, std::allocator<std::function const>>)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>, unsigned long &);
    void tokenize(char const*, unsigned long &, std::function<std::function const*<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>, std::function<std::function const*<MolangScriptArg ()(std::function const*, RenderParams const&<std::function const, std::allocator<std::function const>>)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>);
    void buildTree(unsigned long, std::function<std::function const*<float ()(RenderParams &, std::vector<float, std::allocator<float>> const&)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>, std::function<std::function const*<MolangScriptArg ()(std::function const*, RenderParams const&<std::function const, std::allocator<std::function const>>)> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>);
    void processSections(void);
    void processParamsAndVariables(void);
    void processSemicolons(void);
    void processArrays(void);
    void processMathFuncs(void);
    void processNegatives(void);
    void processBinaryExpression(ExpressionOp);
    void processUnaryExpression(ExpressionOp);
    bool hasSubExpressions(void)const;
    void findClosingOp(unsigned long &, ExpressionOp)const;
    void queryFunctionAccessorFromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void genericQueryFunctionAccessorFromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void evalAsFloat(RenderParams &, float, EvalParams &)const;
};
