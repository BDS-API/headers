#pragma once



class ServerInstanceEventListener {

public:
    ~ServerInstanceEventListener(); // _ZN27ServerInstanceEventListenerD2Ev
    virtual void onServerInitializeStart(ServerInstance &); // _ZN27ServerInstanceEventListener23onServerInitializeStartER14ServerInstance
    virtual void onServerInitializeEnd(ServerInstance &); // _ZN27ServerInstanceEventListener21onServerInitializeEndER14ServerInstance
    virtual void onServerMinecraftInitialized(ServerInstance &, Minecraft &); // _ZN27ServerInstanceEventListener28onServerMinecraftInitializedER14ServerInstanceR9Minecraft
    virtual void onServerLevelInitialized(ServerInstance &, Level &); // _ZN27ServerInstanceEventListener24onServerLevelInitializedER14ServerInstanceR5Level
    virtual void onServerUpdateStart(ServerInstance &); // _ZN27ServerInstanceEventListener19onServerUpdateStartER14ServerInstance
    virtual void onServerUpdateEnd(ServerInstance &); // _ZN27ServerInstanceEventListener17onServerUpdateEndER14ServerInstance
    virtual void onServerSuspend(ServerInstance &); // _ZN27ServerInstanceEventListener15onServerSuspendER14ServerInstance
    virtual void onServerResume(ServerInstance &); // _ZN27ServerInstanceEventListener14onServerResumeER14ServerInstance
    virtual void onServerThreadStarted(ServerInstance &); // _ZN27ServerInstanceEventListener21onServerThreadStartedER14ServerInstance
    virtual void onServerThreadStopped(ServerInstance &); // _ZN27ServerInstanceEventListener21onServerThreadStoppedER14ServerInstance
    virtual void onStartLeaveGame(ServerInstance &); // _ZN27ServerInstanceEventListener16onStartLeaveGameER14ServerInstance
    virtual void onLeaveGameDone(ServerInstance &); // _ZN27ServerInstanceEventListener15onLeaveGameDoneER14ServerInstance
    ServerInstanceEventListener(); // _ZN27ServerInstanceEventListenerC2Ev
};
