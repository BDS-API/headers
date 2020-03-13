#pragma once

#include <string>
#include <memory>
#include <vector>


class FunctionManager {

public:
    class OriginMapping;

    ~FunctionManager(); // _ZN15FunctionManagerD2Ev
    FunctionManager(std::unique_ptr<ICommandDispatcher>, std::unique_ptr<CommandOrigin>, GameRule const*); // _ZN15FunctionManagerC2ESt10unique_ptrI18ICommandDispatcherSt14default_deleteIS1_EES0_I13CommandOriginS2_IS5_EEPK8GameRule
    void load(ResourcePackManager &, CommandRegistry &); // _ZN15FunctionManager4loadER19ResourcePackManagerR15CommandRegistry
    void _addTickFunctionsFromJson(Json::Value const&); // _ZN15FunctionManager25_addTickFunctionsFromJsonERKN4Json5ValueE
    std::string getFunctionNameFromPath(Core::Path const&); // _ZN15FunctionManager23getFunctionNameFromPathB5cxx11ERKN4Core4PathE
    void execute(FunctionEntry &, CommandOrigin const&); // _ZN15FunctionManager7executeER13FunctionEntryRK13CommandOrigin
    void _isRecursiveCall()const; // _ZNK15FunctionManager16_isRecursiveCallEv
    void _processCommandStack(FunctionEntry &, CommandOrigin const&); // _ZN15FunctionManager20_processCommandStackER13FunctionEntryRK13CommandOrigin
    void queueCommands(std::vector<std::unique_ptr<IFunctionEntry>> const&, CommandOrigin const&); // _ZN15FunctionManager13queueCommandsERKSt6vectorISt10unique_ptrI14IFunctionEntrySt14default_deleteIS2_EESaIS5_EERK13CommandOrigin
    void getExecutionLimit()const; // _ZNK15FunctionManager17getExecutionLimitEv
    void _addOriginReference(CommandOrigin const&, unsigned int); // _ZN15FunctionManager19_addOriginReferenceERK13CommandOriginj
    void tick(); // _ZN15FunctionManager4tickEv
    void getCommandDispatcher(); // _ZN15FunctionManager20getCommandDispatcherEv
    void getFunction(std::string const&); // _ZN15FunctionManager11getFunctionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getEarliestSupportedCommandVersion(); // _ZN15FunctionManager34getEarliestSupportedCommandVersionEv
    void _createFunction(std::string const&, std::vector<std::unique_ptr<IFunctionEntry>> &&); // _ZN15FunctionManager15_createFunctionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt6vectorISt10unique_ptrI14IFunctionEntrySt14default_deleteISA_EESaISD_EE
//  void _createFunctionWithError(std::string const&, FunctionState); //TODO: incomplete function definition // _ZN15FunctionManager24_createFunctionWithErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13FunctionState
//  void _processFunctionEntry(std::string const&, std::vector<std::string> const&, std::vector<std::string> &, CurrentCmdVersion, CommandRegistry const&); //TODO: incomplete function definition // _ZN15FunctionManager21_processFunctionEntryERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EERSA_17CurrentCmdVersionRK15CommandRegistry
    void _getCommandList()const; // _ZNK15FunctionManager15_getCommandListEv
    void _getTickList()const; // _ZNK15FunctionManager12_getTickListEv
    void _removeOriginReference(CommandOrigin const&, unsigned int); // _ZN15FunctionManager22_removeOriginReferenceERK13CommandOriginj
    class OriginMapping {

    public:
        ~OriginMapping(); // _ZN15FunctionManager13OriginMappingD2Ev
        OriginMapping(FunctionManager::OriginMapping &&); // _ZN15FunctionManager13OriginMappingC2EOS0_
    };
};
