#pragma once

#include <memory>
#include <vector>
#include <string>
#include "../ScriptCallbackInterface.h"
#include "../ScriptFramework.h"


class ScriptEngine : ScriptApi::ScriptFramework, ScriptApi::ScriptCallbackInterface {

public:
    class ScriptQueueData;

    virtual bool processGetBlocksCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void onInfoReceived(std::string const&);
    virtual void onWarnReceived(std::string const&);
    virtual bool processErrorCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void initialize();
    virtual bool processInfoCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void _registerSystemObjects(ScriptApi::ScriptObjectHandle const&);
    virtual bool processGetEntitiesFromQueryCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processBroadcastEventCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void makeErrorResultObject(ScriptApi::ScriptObjectHandle &);
    virtual bool processDestroyEntityCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processHasComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processRegisterSystemCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processWarningCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processCreateEntityCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processCreateComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processDestroyComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void onLogReceived(std::string const&);
    virtual bool processApplyComponentChangesCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void shutdown();
    virtual bool processAddFilterToQueryCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processExecuteCommandCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processRegisterQueryCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processRegisterEventDataCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processGetComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    ~ScriptEngine();
    virtual bool processRegisterComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void onErrorReceived(std::string const&);
    virtual bool processIsValidEntityCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processGetBlockCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processListenForEventCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processLogCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processCreateEventDataCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    void _setVersionInfo(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptVersionInfo const&);
    void fireEventToScript(EventInfo const&, ScriptApi::ScriptObjectHandle &&);
    void helpGetPosition(ScriptApi::ScriptObjectHandle const&, BlockPos &);
    void deserializeScriptObjectHandleToJson(ScriptApi::ScriptObjectHandle const&, Json::Value &);
    void setScriptEventCoordinator(std::unique_ptr<ScriptEventCoordinator> &&);
    void _processSystemInitialize();
    void _callAllScriptCallback(std::string const&, std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    void helpSetPosition(BlockPos const&, ScriptApi::ScriptObjectHandle const&);
    void _loadScriptQueue();
    void helpDeserialize(ScriptApi::ScriptObjectHandle const&);
    void _getVersionInfo(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptVersionInfo &);
    void getLoggerConfig()const;
    void queueScript(Core::Path const&, std::string const&, std::string const&, std::string const&);
//  ScriptEngine(ScriptApi::ApiScriptType); //TODO: incomplete function definition
    void _processSystemShutdown();
    void helpDefinePosition(Vec3 const&, ScriptApi::ScriptObjectHandle &);
    bool isScriptingEnabled();
    void _processSystemUpdate();
    void helpDefineVec3(ScriptApi::ScriptObjectHandle &, std::string const&, Vec3 const&);
    void _callSingleScriptCallback(ScriptApi::ScriptSystemInfo const&, std::string const&, std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    void getLoggerConfig();
    void helpGetPosition(ScriptApi::ScriptObjectHandle const&, Vec3 &);
    void helpGetVec3(ScriptApi::ScriptObjectHandle const&, std::string const&, Vec3 &);
    void startScriptLoading();
    void helpSetPosition(Vec3 const&, ScriptApi::ScriptObjectHandle const&);
    void update();
    std::string _getScriptApiName()const;
    bool processScriptReportItems();
    void _validateObjectIdentifier(std::string const&)const;
    void _runScript(ScriptEngine::ScriptQueueData const&);
    void getScriptEventCoordinator();
    void _addScriptToQueue(ScriptEngine::ScriptQueueData const&);
    void helpDefinePosition(BlockPos const&, ScriptApi::ScriptObjectHandle &);
    bool isInitialized()const;
    void serializeJsonToScriptObjectHandle(ScriptApi::ScriptObjectHandle &, Json::Value const&);
    class ScriptQueueData {

    public:
        ScriptQueueData(Core::Path const&, std::string const&, std::string const&, std::string const&);
        ScriptQueueData(ScriptEngine::ScriptQueueData const&);
        ~ScriptQueueData();
    };
};
