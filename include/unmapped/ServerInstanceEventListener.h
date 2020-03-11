#pragma once

#include "../bedrock/ServerInstance.h"
#include "../bedrock/Minecraft.h"
#include "../bedrock/level/Level.h"


class ServerInstanceEventListener {

public:
    virtual ~ServerInstanceEventListener();
    virtual void onServerInitializeStart(ServerInstance &);
    virtual void onServerInitializeEnd(ServerInstance &);
    virtual void onServerMinecraftInitialized(ServerInstance &, Minecraft &);
    virtual void onServerLevelInitialized(ServerInstance &, Level &);
    virtual void onServerUpdateStart(ServerInstance &);
    virtual void onServerUpdateEnd(ServerInstance &);
    virtual void onServerSuspend(ServerInstance &);
    virtual void onServerResume(ServerInstance &);
    virtual void onServerThreadStarted(ServerInstance &);
    virtual void onServerThreadStopped(ServerInstance &);
    virtual void onStartLeaveGame(ServerInstance &);
    virtual void onLeaveGameDone(ServerInstance &);

    ServerInstanceEventListener();
};
