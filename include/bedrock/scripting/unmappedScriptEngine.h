#pragma once

#include "../ScriptObjectHandle.h"
#include "../../../json/Value.h"
#include "../../../unmapped/EventInfo.h"
#include "../ScriptFramework.h"
#include <string>
#include "../../../core/Path.h"
#include "../../util/Vec3.h"
#include "../ScriptSystemInfo.h"
#include "ScriptEventCoordinator.h"
#include <vector>
#include <memory>
#include "../../util/BlockPos.h"
#include "../ScriptVersionInfo.h"
#include "../ScriptCallbackInterface.h"


class ScriptEngine : ScriptApi::ScriptFramework, ScriptApi::ScriptCallbackInterface {

public:
    class ScriptQueueData;

    virtual void onInfoReceived(std::string const&);
    ~ScriptEngine();
    virtual void onLogReceived(std::string const&);
    virtual bool processErrorCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void shutdown();
    virtual void onWarnReceived(std::string const&);
    virtual bool processListenForEventCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processExecuteCommandCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processRegisterEventDataCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processBroadcastEventCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processDestroyEntityCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processLogCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processGetBlockCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processGetEntitiesFromQueryCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processGetBlocksCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processCreateComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processAddFilterToQueryCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processGetComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processRegisterSystemCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processIsValidEntityCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processWarningCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processDestroyComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processHasComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processRegisterComponentCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void _registerSystemObjects(ScriptApi::ScriptObjectHandle const&);
    virtual bool processCreateEntityCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processCreateEventDataCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void makeErrorResultObject(ScriptApi::ScriptObjectHandle &);
    virtual bool processApplyComponentChangesCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual bool processInfoCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void initialize();
    virtual bool processRegisterQueryCallback(std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    virtual void onErrorReceived(std::string const&);
    bool isScriptingEnabled();
    void _callAllScriptCallback(std::string const&, std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    void getLoggerConfig();
    void _processSystemInitialize();
    void _processSystemUpdate();
    void _callSingleScriptCallback(ScriptApi::ScriptSystemInfo const&, std::string const&, std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &);
    void _loadScriptQueue();
    void _addScriptToQueue(ScriptEngine::ScriptQueueData const&);
    void getLoggerConfig()const;
    void helpGetPosition(ScriptApi::ScriptObjectHandle const&, Vec3 &);
    void _validateObjectIdentifier(std::string const&)const;
    bool isInitialized()const;
    void startScriptLoading();
    void _runScript(ScriptEngine::ScriptQueueData const&);
    void _setVersionInfo(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptVersionInfo const&);
    void fireEventToScript(EventInfo const&, ScriptApi::ScriptObjectHandle &&);
    void helpDefinePosition(Vec3 const&, ScriptApi::ScriptObjectHandle &);
    void helpDefinePosition(BlockPos const&, ScriptApi::ScriptObjectHandle &);
    void update();
    void getScriptEventCoordinator();
//  ScriptEngine(ScriptApi::ApiScriptType); //TODO: incomplete function definition
    std::string _getScriptApiName()const;
    void _getVersionInfo(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptVersionInfo &);
    void deserializeScriptObjectHandleToJson(ScriptApi::ScriptObjectHandle const&, Json::Value &);
    void queueScript(Core::Path const&, std::string const&, std::string const&, std::string const&);
    void helpSetPosition(Vec3 const&, ScriptApi::ScriptObjectHandle const&);
    bool processScriptReportItems();
    void helpDeserialize(ScriptApi::ScriptObjectHandle const&);
    void helpDefineVec3(ScriptApi::ScriptObjectHandle &, std::string const&, Vec3 const&);
    void _processSystemShutdown();
    void serializeJsonToScriptObjectHandle(ScriptApi::ScriptObjectHandle &, Json::Value const&);
    void helpSetPosition(BlockPos const&, ScriptApi::ScriptObjectHandle const&);
    void helpGetPosition(ScriptApi::ScriptObjectHandle const&, BlockPos &);
    void helpGetVec3(ScriptApi::ScriptObjectHandle const&, std::string const&, Vec3 &);
    void setScriptEventCoordinator(std::unique_ptr<ScriptEventCoordinator> &&);
    class ScriptQueueData {

    public:
        ~ScriptQueueData();
        ScriptQueueData(ScriptEngine::ScriptQueueData const&);
        ScriptQueueData(Core::Path const&, std::string const&, std::string const&, std::string const&);
    };
};
