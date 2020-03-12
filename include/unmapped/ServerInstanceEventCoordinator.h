#pragma once

#include "../bedrock/ServerInstance.h"
#include "../bedrock/Minecraft.h"
#include "../bedrock/level/Level.h"


class ServerInstanceEventCoordinator {

public:
    void sendServerUpdateStart(ServerInstance &);
    void sendServerThreadStarted(ServerInstance &);
    void sendServerInitializeEnd(ServerInstance &);
    void sendServerUpdateEnd(ServerInstance &);
    void sendServerMinecraftInitialized(ServerInstance &, Minecraft &);
    void sendLeaveGameDone(ServerInstance &);
    void sendStartLeaveGame(ServerInstance &);
    void sendServerInitializeStart(ServerInstance &);
    void sendServerLevelInitialized(ServerInstance &, Level &);
    void sendServerResume(ServerInstance &);
    void sendServerSuspend(ServerInstance &);
    ~ServerInstanceEventCoordinator();
    void sendServerThreadStopped(ServerInstance &);
    ServerInstanceEventCoordinator();
};
