#pragma once

#include "./ServerInstanceEventListener.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "./NetworkHandler.h"
#include "../bedrock/scripting/ScriptVersionInfo.h"
#include "../bedrock/scripting/ScriptReportItem.h"
#include "../bedrock/ServerInstance.h"
#include "../bedrock/network/packet/sender/PacketSender.h"
#include "../bedrock/scripting/unmapped/ScriptCommand.h"
#include "../bedrock/Minecraft.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/scripting/unmapped/ScriptServerContext.h"
#include "../bedrock/scripting/ScriptObjectHandle.h"


class MinecraftServerScriptEngine : ServerInstanceEventListener /*ScriptEngineWithContext<ScriptServerContext>*/ { //TODO: incomplete class definition

public:
    virtual ~MinecraftServerScriptEngine();
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
//  void _setupContext(Minecraft &, PacketSender &, entt::Registry<unsigned int> &); //TODO: incomplete function definition
    void _initializeServer(Level &, NetworkHandler &);
    void _unregisterEventListeners(Level *, NetworkHandler &);
    void _registerEventListeners(Level &, NetworkHandler &);
};
