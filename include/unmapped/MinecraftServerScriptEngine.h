#pragma once

#include "../bedrock/ServerInstance.h"
#include "../bedrock/Minecraft.h"
#include "../bedrock/scripting/unmapped/ScriptServerContext.h"
#include "ServerInstanceEventListener.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/scripting/ScriptVersionInfo.h"
#include "../bedrock/scripting/ScriptObjectHandle.h"
#include "NetworkHandler.h"
#include "../bedrock/scripting/ScriptReportItem.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "../bedrock/network/packet/sender/PacketSender.h"
#include "../bedrock/scripting/unmapped/ScriptCommand.h"


class MinecraftServerScriptEngine : ServerInstanceEventListener /*ScriptEngineWithContext<ScriptServerContext>*/ { //TODO: incomplete class definition

public:
    virtual void _handleWarning(ScriptApi::ScriptReportItem const&);
    virtual void onServerUpdateStart(ServerInstance &);
    virtual void _helpRegisterSystemCallbacks(ScriptApi::ScriptObjectHandle const&);
    virtual void _handleError(ScriptApi::ScriptReportItem const&);
    virtual void onServerUpdateEnd(ServerInstance &);
    virtual void onLeaveGameDone(ServerInstance &);
    virtual void onLevelTick();
    virtual void onExecuteCommandCalled(ScriptApi::ScriptVersionInfo const&, ScriptCommand &&);
    virtual void executeCommand(ScriptCommand const&);
    virtual void onServerThreadStarted(ServerInstance &);
    virtual void onServerLevelInitialized(ServerInstance &, Level &);
    virtual void _registerSystemObjects(ScriptApi::ScriptObjectHandle const&);
    ~MinecraftServerScriptEngine();
    virtual void setupInterface();
    void _queueResourcePackScripts(ResourcePackManager &);
    MinecraftServerScriptEngine(ServerInstance &);
//  void _setupContext(Minecraft &, PacketSender &, entt::Registry<unsigned int> &); //TODO: incomplete function definition
    void _registerEventListeners(Level &, NetworkHandler &);
    void _unregisterEventListeners(Level *, NetworkHandler &);
    void _initializeServer(Level &, NetworkHandler &);
};
