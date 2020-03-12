#pragma once

#include "../bedrock/ServerInstance.h"
#include "../bedrock/Minecraft.h"
#include "../bedrock/level/Level.h"


class ServerInstanceEventListener {

public:
    virtual void onServerSuspend(ServerInstance &);
    virtual void onServerUpdateStart(ServerInstance &);
    virtual void onServerThreadStarted(ServerInstance &);
    virtual void onServerThreadStopped(ServerInstance &);
    virtual void onServerResume(ServerInstance &);
    virtual void onServerInitializeStart(ServerInstance &);
    virtual void onServerUpdateEnd(ServerInstance &);
    virtual void onLeaveGameDone(ServerInstance &);
    virtual void onServerInitializeEnd(ServerInstance &);
    ~ServerInstanceEventListener();
    virtual void onServerLevelInitialized(ServerInstance &, Level &);
    virtual void onStartLeaveGame(ServerInstance &);
    virtual void onServerMinecraftInitialized(ServerInstance &, Minecraft &);
    ServerInstanceEventListener();
};
