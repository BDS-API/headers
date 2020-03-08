#pragma once

#include "../bedrock/command/dispatcher/ICommandDispatcher"
#include "../bedrock/command/orgin/CommandOrigin"
#include "../json/Value"
#include "../bedrock/pack/ResourcePackManager"


class FunctionManager {

public:
    virtual FunctionManager::~FunctionManager();

    FunctionManager(std::unique_ptr<ICommandDispatcher, std::default_delete<ICommandDispatcher>>, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, GameRule const*);
    void load(ResourcePackManager &, CommandRegistry &);
    void _addTickFunctionsFromJson(Json::Value const&);
    void execute(FunctionEntry &, CommandOrigin const&);
    void _isRecursiveCall(void)const;
    void _processCommandStack(FunctionEntry &, CommandOrigin const&);
    void queueCommands(std::vector<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry>>, std::allocator<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry>>>> const&, CommandOrigin const&);
    void getExecutionLimit(void)const;
    void _addOriginReference(CommandOrigin const&, unsigned int);
    void tick(void);
    void getCommandDispatcher(void);
    void getFunction(std::string const&);
    void getEarliestSupportedCommandVersion(void);
    void _createFunction(std::string const&, std::vector<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry>>, std::allocator<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry>>>> &&);
    void _createFunctionWithError(std::string const&, FunctionState);
    void _processFunctionEntry(std::string const&, std::vector<std::string, std::allocator<std::string>> const&, std::vector<std::string, std::allocator<std::string>>&, CurrentCmdVersion, CommandRegistry const&);
    void _getCommandList(void)const;
    void _getTickList(void)const;
    void _removeOriginReference(CommandOrigin const&, unsigned int);
};
