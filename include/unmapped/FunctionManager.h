#pragma once

#include <string>
#include "FunctionEntry.h"
#include "../bedrock/command/CommandRegistry.h"
#include "../bedrock/command/origin/CommandOrigin.h"
#include "IFunctionEntry.h"
#include "GameRule.h"
#include "../json/Value.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "../core/Path.h"
#include <vector>
#include <memory>
#include "../bedrock/command/dispatcher/ICommandDispatcher.h"


class FunctionManager {

public:
    class OriginMapping;

    ~FunctionManager();
    void getEarliestSupportedCommandVersion();
//  void _processFunctionEntry(std::string const&, std::vector<std::string> const&, std::vector<std::string> &, CurrentCmdVersion, CommandRegistry const&); //TODO: incomplete function definition
    void _addOriginReference(CommandOrigin const&, unsigned int);
    void _getTickList()const;
    void getCommandDispatcher();
    void getFunction(std::string const&);
    void _getCommandList()const;
    void getExecutionLimit()const;
    void _removeOriginReference(CommandOrigin const&, unsigned int);
    void _addTickFunctionsFromJson(Json::Value const&);
    void _processCommandStack(FunctionEntry &, CommandOrigin const&);
//  void _createFunctionWithError(std::string const&, FunctionState); //TODO: incomplete function definition
    void execute(FunctionEntry &, CommandOrigin const&);
    FunctionManager(std::unique_ptr<ICommandDispatcher>, std::unique_ptr<CommandOrigin>, GameRule const*);
    void _isRecursiveCall()const;
    void load(ResourcePackManager &, CommandRegistry &);
    void _createFunction(std::string const&, std::vector<std::unique_ptr<IFunctionEntry>> &&);
    void tick();
    std::string getFunctionNameFromPath(Core::Path const&);
    void queueCommands(std::vector<std::unique_ptr<IFunctionEntry>> const&, CommandOrigin const&);
    class OriginMapping {

    public:
        OriginMapping(FunctionManager::OriginMapping &&);
        ~OriginMapping();
    };
};
