#pragma once

#include <memory>
#include <string>
#include <vector>


class FunctionManager {

public:
    class OriginMapping;

    ~FunctionManager();
    void _processCommandStack(FunctionEntry &, CommandOrigin const&);
    void getExecutionLimit()const;
    void _removeOriginReference(CommandOrigin const&, unsigned int);
    void _getTickList()const;
    void load(ResourcePackManager &, CommandRegistry &);
    void getEarliestSupportedCommandVersion();
    void execute(FunctionEntry &, CommandOrigin const&);
    void _addOriginReference(CommandOrigin const&, unsigned int);
//  void _createFunctionWithError(std::string const&, FunctionState); //TODO: incomplete function definition
    void tick();
    void _isRecursiveCall()const;
    void _createFunction(std::string const&, std::vector<std::unique_ptr<IFunctionEntry>> &&);
    std::string getFunctionNameFromPath(Core::Path const&);
    void queueCommands(std::vector<std::unique_ptr<IFunctionEntry>> const&, CommandOrigin const&);
    FunctionManager(std::unique_ptr<ICommandDispatcher>, std::unique_ptr<CommandOrigin>, GameRule const*);
    void getFunction(std::string const&);
    void _getCommandList()const;
    void _addTickFunctionsFromJson(Json::Value const&);
//  void _processFunctionEntry(std::string const&, std::vector<std::string> const&, std::vector<std::string> &, CurrentCmdVersion, CommandRegistry const&); //TODO: incomplete function definition
    void getCommandDispatcher();
    class OriginMapping {

    public:
        ~OriginMapping();
        OriginMapping(FunctionManager::OriginMapping &&);
    };
};
