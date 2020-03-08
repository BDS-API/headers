#pragma once

#include "../bedrock/ServerInstance"


class ServerInstanceEventCoordinator {

public:

    ServerInstanceEventCoordinator(void);
    void sendServerInitializeStart(ServerInstance &);
    void sendServerInitializeEnd(ServerInstance &);
    void sendServerMinecraftInitialized(ServerInstance &, Minecraft &);
    void sendServerLevelInitialized(ServerInstance &, Level &);
    void sendServerUpdateStart(ServerInstance &);
    void sendServerUpdateEnd(ServerInstance &);
    void sendServerSuspend(ServerInstance &);
    void sendServerResume(ServerInstance &);
    void sendServerThreadStarted(ServerInstance &);
    void sendServerThreadStopped(ServerInstance &);
    void sendStartLeaveGame(ServerInstance &);
    void sendLeaveGameDone(ServerInstance &);
};
