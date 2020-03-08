#pragma once

#include "../bedrock/scripting/ScriptVersionInfo"
#include "../bedrock/network/packet/sender/PacketSender"
#include "../bedrock/ServerInstance"
#include "../bedrock/scripting/unmapped/ScriptCommand"
#include "../bedrock/scripting/ScriptReportItem"
#include "../bedrock/scripting/ScriptObjectHandle"
#include "../bedrock/pack/ResourcePackManager"
#include "../bedrock/Minecraft"
#include "../bedrock/scripting/unmapped/ScriptServerContext"
#include "../bedrock/level/Level"


class MinecraftServerScriptEngine : ScriptEngineWithContext<ScriptServerContext>, ServerInstanceEventListener {

public:
    MinecraftServerScriptEngine::~MinecraftServerScriptEngine()
    virtual void setupInterface();
    virtual void onExecuteCommandCalled(ScriptApi::ScriptVersionInfo const&, ScriptCommand &&);
    virtual void executeCommand(ScriptCommand const&);
    virtual void _registerSystemObjects(ScriptApi::ScriptObjectHandle const&);
    virtual void _helpRegisterSystemCallbacks(ScriptApi::ScriptObjectHandle const&);
    virtual void _handleError(ScriptApi::ScriptReportItem const&);
    virtual void _handleWarning(ScriptApi::ScriptReportItem const&);
    virtual void onServerLevelInitialized(ServerInstance &, Level &);
    virtual void onServerUpdateStart(ServerInstance &);
    virtual void onServerUpdateEnd(ServerInstance &);
    virtual void onServerThreadStarted(ServerInstance &);
    virtual void onLeaveGameDone(ServerInstance &);
    virtual void onLevelTick();

    MinecraftServerScriptEngine(ServerInstance &);
    void _queueResourcePackScripts(ResourcePackManager &);
    void _setupContext(Minecraft &, PacketSender &, entt::Registry<unsigned int> &);
    void _initializeServer(Level &, NetworkHandler &);
    void _unregisterEventListeners(Level *, NetworkHandler &);
    void _registerEventListeners(Level &, NetworkHandler &);
};
