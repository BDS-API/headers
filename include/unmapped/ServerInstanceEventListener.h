#pragma once



class ServerInstanceEventListener {

public:
    virtual void onServerResume(ServerInstance &);
    virtual void onServerThreadStopped(ServerInstance &);
    virtual void onServerInitializeEnd(ServerInstance &);
    virtual void onServerLevelInitialized(ServerInstance &, Level &);
    virtual void onLeaveGameDone(ServerInstance &);
    ~ServerInstanceEventListener();
    virtual void onServerInitializeStart(ServerInstance &);
    virtual void onServerMinecraftInitialized(ServerInstance &, Minecraft &);
    virtual void onServerUpdateEnd(ServerInstance &);
    virtual void onServerUpdateStart(ServerInstance &);
    virtual void onServerSuspend(ServerInstance &);
    virtual void onServerThreadStarted(ServerInstance &);
    virtual void onStartLeaveGame(ServerInstance &);
    ServerInstanceEventListener();
};
