#pragma once

#include <vector>
#include "../ScriptFramework.h"
#include <memory>
#include <string>
#include "../ScriptCallbackInterface.h"


class ScriptEngine : ScriptApi::ScriptFramework, ScriptApi::ScriptCallbackInterface {

public:
    class ScriptQueueData;

    ~ScriptEngine(); // _ZN12ScriptEngineD2Ev
    virtual void initialize(); // _ZN12ScriptEngine10initializeEv
    virtual void shutdown(); // _ZN12ScriptEngine8shutdownEv
    virtual void onLogReceived(std::string const&); // _ZN12ScriptEngine13onLogReceivedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void onInfoReceived(std::string const&); // _ZN12ScriptEngine14onInfoReceivedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void onWarnReceived(std::string const&); // _ZN12ScriptEngine14onWarnReceivedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void onErrorReceived(std::string const&); // _ZN12ScriptEngine15onErrorReceivedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void makeErrorResultObject(ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine21makeErrorResultObjectERN9ScriptApi18ScriptObjectHandleE
    virtual bool processLogCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine18processLogCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processRegisterEventDataCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine32processRegisterEventDataCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processCreateEventDataCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine30processCreateEventDataCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processListenForEventCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine29processListenForEventCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processBroadcastEventCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine29processBroadcastEventCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processCreateEntityCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine27processCreateEntityCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processDestroyEntityCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine28processDestroyEntityCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processIsValidEntityCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine28processIsValidEntityCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processRegisterComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine32processRegisterComponentCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processCreateComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine30processCreateComponentCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processDestroyComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine31processDestroyComponentCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processHasComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine27processHasComponentCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processGetComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine27processGetComponentCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processApplyComponentChangesCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine36processApplyComponentChangesCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processRegisterQueryCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine28processRegisterQueryCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processAddFilterToQueryCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine31processAddFilterToQueryCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processGetEntitiesFromQueryCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine35processGetEntitiesFromQueryCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processGetBlockCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine23processGetBlockCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processGetBlocksCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine24processGetBlocksCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processExecuteCommandCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine29processExecuteCommandCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processRegisterSystemCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine29processRegisterSystemCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processInfoCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine19processInfoCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processWarningCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine22processWarningCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual bool processErrorCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine20processErrorCallbackERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaIS2_EERS2_
    virtual void _registerSystemObjects(ScriptApi::ScriptObjectHandle const&); // _ZN12ScriptEngine22_registerSystemObjectsERKN9ScriptApi18ScriptObjectHandleE
    void _getVersionInfo(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptVersionInfo &); // _ZN12ScriptEngine15_getVersionInfoERKN9ScriptApi18ScriptObjectHandleERNS0_17ScriptVersionInfoE
    void _setVersionInfo(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptVersionInfo const&); // _ZN12ScriptEngine15_setVersionInfoERKN9ScriptApi18ScriptObjectHandleERKNS0_17ScriptVersionInfoE
    void serializeJsonToScriptObjectHandle(ScriptApi::ScriptObjectHandle &, Json::Value const&); // _ZN12ScriptEngine33serializeJsonToScriptObjectHandleERN9ScriptApi18ScriptObjectHandleERKN4Json5ValueE
    void deserializeScriptObjectHandleToJson(ScriptApi::ScriptObjectHandle const&, Json::Value &); // _ZN12ScriptEngine35deserializeScriptObjectHandleToJsonERKN9ScriptApi18ScriptObjectHandleERN4Json5ValueE
    void helpGetVec3(ScriptApi::ScriptObjectHandle const&, std::string const&, Vec3 &); // _ZN12ScriptEngine11helpGetVec3ERKN9ScriptApi18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER4Vec3
    void helpDefineVec3(ScriptApi::ScriptObjectHandle &, std::string const&, Vec3 const&); // _ZN12ScriptEngine14helpDefineVec3ERN9ScriptApi18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK4Vec3
    void queueScript(Core::Path const&, std::string const&, std::string const&, std::string const&); // _ZN12ScriptEngine11queueScriptERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_SB_
    void _addScriptToQueue(ScriptEngine::ScriptQueueData const&); // _ZN12ScriptEngine17_addScriptToQueueERKNS_15ScriptQueueDataE
    void startScriptLoading(); // _ZN12ScriptEngine18startScriptLoadingEv
    void _loadScriptQueue(); // _ZN12ScriptEngine16_loadScriptQueueEv
    bool isScriptingEnabled(); // _ZN12ScriptEngine18isScriptingEnabledEv
//  ScriptEngine(ScriptApi::ApiScriptType); //TODO: incomplete function definition // _ZN12ScriptEngineC2EN9ScriptApi13ApiScriptTypeE
    void setScriptEventCoordinator(std::unique_ptr<ScriptEventCoordinator> &&); // _ZN12ScriptEngine25setScriptEventCoordinatorEOSt10unique_ptrI22ScriptEventCoordinatorSt14default_deleteIS1_EE
    std::string _getScriptApiName()const; // _ZNK12ScriptEngine17_getScriptApiNameB5cxx11Ev
    bool isInitialized()const; // _ZNK12ScriptEngine13isInitializedEv
    void update(); // _ZN12ScriptEngine6updateEv
    bool processScriptReportItems(); // _ZN12ScriptEngine24processScriptReportItemsEv
    void _processSystemUpdate(); // _ZN12ScriptEngine20_processSystemUpdateEv
    void _processSystemShutdown(); // _ZN12ScriptEngine22_processSystemShutdownEv
    void fireEventToScript(EventInfo const&, ScriptApi::ScriptObjectHandle &&); // _ZN12ScriptEngine17fireEventToScriptERK9EventInfoON9ScriptApi18ScriptObjectHandleE
    void getLoggerConfig(); // _ZN12ScriptEngine15getLoggerConfigEv
    void getLoggerConfig()const; // _ZNK12ScriptEngine15getLoggerConfigEv
    void helpDeserialize(ScriptApi::ScriptObjectHandle const&); // _ZN12ScriptEngine15helpDeserializeERKN9ScriptApi18ScriptObjectHandleE
    void helpDefinePosition(Vec3 const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine18helpDefinePositionERK4Vec3RN9ScriptApi18ScriptObjectHandleE
    void helpSetPosition(Vec3 const&, ScriptApi::ScriptObjectHandle const&); // _ZN12ScriptEngine15helpSetPositionERK4Vec3RKN9ScriptApi18ScriptObjectHandleE
    void helpDefinePosition(BlockPos const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine18helpDefinePositionERK8BlockPosRN9ScriptApi18ScriptObjectHandleE
    void helpSetPosition(BlockPos const&, ScriptApi::ScriptObjectHandle const&); // _ZN12ScriptEngine15helpSetPositionERK8BlockPosRKN9ScriptApi18ScriptObjectHandleE
    void helpGetPosition(ScriptApi::ScriptObjectHandle const&, Vec3 &); // _ZN12ScriptEngine15helpGetPositionERKN9ScriptApi18ScriptObjectHandleER4Vec3
    void helpGetPosition(ScriptApi::ScriptObjectHandle const&, BlockPos &); // _ZN12ScriptEngine15helpGetPositionERKN9ScriptApi18ScriptObjectHandleER8BlockPos
    void getScriptEventCoordinator(); // _ZN12ScriptEngine25getScriptEventCoordinatorEv
    void _validateObjectIdentifier(std::string const&)const; // _ZNK12ScriptEngine25_validateObjectIdentifierERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _runScript(ScriptEngine::ScriptQueueData const&); // _ZN12ScriptEngine10_runScriptERKNS_15ScriptQueueDataE
    void _processSystemInitialize(); // _ZN12ScriptEngine24_processSystemInitializeEv
    void _callSingleScriptCallback(ScriptApi::ScriptSystemInfo const&, std::string const&, std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine25_callSingleScriptCallbackERKN9ScriptApi16ScriptSystemInfoERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorINS0_18ScriptObjectHandleESaISD_EERSD_
    void _callAllScriptCallback(std::string const&, std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &); // _ZN12ScriptEngine22_callAllScriptCallbackERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIN9ScriptApi18ScriptObjectHandleESaISA_EERSA_
    class ScriptQueueData {

    public:
        ScriptQueueData(Core::Path const&, std::string const&, std::string const&, std::string const&); // _ZN12ScriptEngine15ScriptQueueDataC2ERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESC_SC_
        ~ScriptQueueData(); // _ZN12ScriptEngine15ScriptQueueDataD2Ev
        ScriptQueueData(ScriptEngine::ScriptQueueData const&); // _ZN12ScriptEngine15ScriptQueueDataC2ERKS0_
    };
};
