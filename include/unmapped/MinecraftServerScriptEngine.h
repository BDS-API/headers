#pragma once

#include "ServerInstanceEventListener.h"


class MinecraftServerScriptEngine : ServerInstanceEventListener /*ScriptEngineWithContext<ScriptServerContext>*/ { //TODO: incomplete class definition

public:
    virtual void onServerUpdateEnd(ServerInstance &);
    virtual void onServerLevelInitialized(ServerInstance &, Level &);
    virtual void _handleError(ScriptApi::ScriptReportItem const&);
    virtual void onExecuteCommandCalled(ScriptApi::ScriptVersionInfo const&, ScriptCommand &&);
    virtual void _handleWarning(ScriptApi::ScriptReportItem const&);
    ~MinecraftServerScriptEngine();
    virtual void _registerSystemObjects(ScriptApi::ScriptObjectHandle const&);
    virtual void onServerUpdateStart(ServerInstance &);
    virtual void onLevelTick();
    virtual void executeCommand(ScriptCommand const&);
    virtual void setupInterface();
    virtual void onLeaveGameDone(ServerInstance &);
    virtual void _helpRegisterSystemCallbacks(ScriptApi::ScriptObjectHandle const&);
    virtual void onServerThreadStarted(ServerInstance &);
    void _registerEventListeners(Level &, NetworkHandler &);
    void _initializeServer(Level &, NetworkHandler &);
    void _unregisterEventListeners(Level *, NetworkHandler &);
//  void _setupContext(Minecraft &, PacketSender &, entt::Registry<unsigned int> &); //TODO: incomplete function definition
    MinecraftServerScriptEngine(ServerInstance &);
    void _queueResourcePackScripts(ResourcePackManager &);
};
