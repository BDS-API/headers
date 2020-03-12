#pragma once



class ServerInstanceEventCoordinator {

public:
    void sendServerUpdateEnd(ServerInstance &);
    void sendServerThreadStopped(ServerInstance &);
    void sendServerMinecraftInitialized(ServerInstance &, Minecraft &);
    void sendLeaveGameDone(ServerInstance &);
    void sendServerUpdateStart(ServerInstance &);
    void sendServerResume(ServerInstance &);
    void sendServerThreadStarted(ServerInstance &);
    ~ServerInstanceEventCoordinator();
    void sendStartLeaveGame(ServerInstance &);
    void sendServerInitializeEnd(ServerInstance &);
    void sendServerSuspend(ServerInstance &);
    void sendServerInitializeStart(ServerInstance &);
    void sendServerLevelInitialized(ServerInstance &, Level &);
    ServerInstanceEventCoordinator();
};
