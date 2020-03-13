#pragma once

#include "ServerInstanceEventListener.h"


class MinecraftServerScriptEngine : ServerInstanceEventListener /*ScriptEngineWithContext<ScriptServerContext>*/ { //TODO: incomplete class definition

public:
    ~MinecraftServerScriptEngine(); // _ZN27MinecraftServerScriptEngineD2Ev
    virtual void setupInterface(); // _ZN27MinecraftServerScriptEngine14setupInterfaceEv
    virtual void onExecuteCommandCalled(ScriptApi::ScriptVersionInfo const&, ScriptCommand &&); // _ZN27MinecraftServerScriptEngine22onExecuteCommandCalledERKN9ScriptApi17ScriptVersionInfoEO13ScriptCommand
    virtual void executeCommand(ScriptCommand const&); // _ZN27MinecraftServerScriptEngine14executeCommandERK13ScriptCommand
    virtual void _registerSystemObjects(ScriptApi::ScriptObjectHandle const&); // _ZN27MinecraftServerScriptEngine22_registerSystemObjectsERKN9ScriptApi18ScriptObjectHandleE
    virtual void _helpRegisterSystemCallbacks(ScriptApi::ScriptObjectHandle const&); // _ZN27MinecraftServerScriptEngine28_helpRegisterSystemCallbacksERKN9ScriptApi18ScriptObjectHandleE
    virtual void _handleError(ScriptApi::ScriptReportItem const&); // _ZN27MinecraftServerScriptEngine12_handleErrorERKN9ScriptApi16ScriptReportItemE
    virtual void _handleWarning(ScriptApi::ScriptReportItem const&); // _ZN27MinecraftServerScriptEngine14_handleWarningERKN9ScriptApi16ScriptReportItemE
    virtual void onServerLevelInitialized(ServerInstance &, Level &); // _ZN27MinecraftServerScriptEngine24onServerLevelInitializedER14ServerInstanceR5Level
    virtual void onServerUpdateStart(ServerInstance &); // _ZN27MinecraftServerScriptEngine19onServerUpdateStartER14ServerInstance
    virtual void onServerUpdateEnd(ServerInstance &); // _ZN27MinecraftServerScriptEngine17onServerUpdateEndER14ServerInstance
    virtual void onServerThreadStarted(ServerInstance &); // _ZN27MinecraftServerScriptEngine21onServerThreadStartedER14ServerInstance
    virtual void onLeaveGameDone(ServerInstance &); // _ZN27MinecraftServerScriptEngine15onLeaveGameDoneER14ServerInstance
    virtual void onLevelTick(); // _ZN27MinecraftServerScriptEngine11onLevelTickEv
    MinecraftServerScriptEngine(ServerInstance &); // _ZN27MinecraftServerScriptEngineC2ER14ServerInstance
    void _queueResourcePackScripts(ResourcePackManager &); // _ZN27MinecraftServerScriptEngine25_queueResourcePackScriptsER19ResourcePackManager
//  void _setupContext(Minecraft &, PacketSender &, entt::Registry<unsigned int> &); //TODO: incomplete function definition // _ZN27MinecraftServerScriptEngine13_setupContextER9MinecraftR12PacketSenderRN4entt8RegistryIjEE
    void _initializeServer(Level &, NetworkHandler &); // _ZN27MinecraftServerScriptEngine17_initializeServerER5LevelR14NetworkHandler
    void _unregisterEventListeners(Level *, NetworkHandler &); // _ZN27MinecraftServerScriptEngine25_unregisterEventListenersEP5LevelR14NetworkHandler
    void _registerEventListeners(Level &, NetworkHandler &); // _ZN27MinecraftServerScriptEngine23_registerEventListenersER5LevelR14NetworkHandler
};
