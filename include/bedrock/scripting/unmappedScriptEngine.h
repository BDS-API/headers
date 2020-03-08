#pragma once

#include "../ScriptCallbackInterface"
#include "../ScriptObjectHandle"
#include "../../util/Vec3"
#include "../../../unmapped/EventInfo"
#include "../../../core/Path"
#include "../../util/BlockPos"
#include "../ScriptSystemInfo"
#include "../../../json/Value"
#include "../ScriptFramework"
#include "../ScriptVersionInfo"


class ScriptEngine : ScriptApi::ScriptFramework, ScriptApi::ScriptCallbackInterface {

public:
    virtual ScriptEngine::~ScriptEngine()
    virtual void initialize();
    virtual void shutdown();
    virtual void onLogReceived(std::string const&);
    virtual void onInfoReceived(std::string const&);
    virtual void onWarnReceived(std::string const&);
    virtual void onErrorReceived(std::string const&);
    virtual void makeErrorResultObject(ScriptApi::ScriptObjectHandle &);
    virtual bool processLogCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processRegisterEventDataCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processCreateEventDataCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processListenForEventCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processBroadcastEventCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processCreateEntityCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processDestroyEntityCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processIsValidEntityCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processRegisterComponentCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processCreateComponentCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processDestroyComponentCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processHasComponentCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processGetComponentCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processApplyComponentChangesCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processRegisterQueryCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processAddFilterToQueryCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processGetEntitiesFromQueryCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processGetBlockCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processGetBlocksCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processExecuteCommandCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processRegisterSystemCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processInfoCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processWarningCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual bool processErrorCallback(std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    virtual void _registerSystemObjects(ScriptApi::ScriptObjectHandle const&);

    void _getVersionInfo(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptVersionInfo &);
    void _setVersionInfo(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptVersionInfo const&);
    void serializeJsonToScriptObjectHandle(ScriptApi::ScriptObjectHandle &, Json::Value const&);
    void deserializeScriptObjectHandleToJson(ScriptApi::ScriptObjectHandle const&, Json::Value &);
    void helpGetVec3(ScriptApi::ScriptObjectHandle const&, std::string const&, Vec3 &);
    void helpDefineVec3(ScriptApi::ScriptObjectHandle &, std::string const&, Vec3 const&);
    void queueScript(Core::Path const&, std::string const&, std::string const&, std::string const&);
    void _addScriptToQueue(ScriptEngine::ScriptQueueData const&);
    void startScriptLoading();
    void _loadScriptQueue();
    bool isScriptingEnabled();
    ScriptEngine(ScriptApi::ApiScriptType);
    void setScriptEventCoordinator(std::unique_ptr<ScriptEventCoordinator, std::default_delete<ScriptEventCoordinator>> &&);
    bool isInitialized()const;
    void update();
    bool processScriptReportItems();
    void _processSystemUpdate();
    void _processSystemShutdown();
    void fireEventToScript(EventInfo const&, ScriptApi::ScriptObjectHandle &&);
    void getLoggerConfig();
    void getLoggerConfig()const;
    void helpDeserialize(ScriptApi::ScriptObjectHandle const&);
    void helpDefinePosition(Vec3 const&, ScriptApi::ScriptObjectHandle &);
    void helpSetPosition(Vec3 const&, ScriptApi::ScriptObjectHandle const&);
    void helpDefinePosition(BlockPos const&, ScriptApi::ScriptObjectHandle &);
    void helpSetPosition(BlockPos const&, ScriptApi::ScriptObjectHandle const&);
    void helpGetPosition(ScriptApi::ScriptObjectHandle const&, Vec3 &);
    void helpGetPosition(ScriptApi::ScriptObjectHandle const&, BlockPos &);
    void getScriptEventCoordinator();
    void _validateObjectIdentifier(std::string const&)const;
    void _runScript(ScriptEngine::ScriptQueueData const&);
    void _processSystemInitialize();
    void _callSingleScriptCallback(ScriptApi::ScriptSystemInfo const&, std::string const&, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
    void _callAllScriptCallback(std::string const&, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&);
};
